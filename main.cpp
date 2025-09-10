#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to return indices of two numbers that add up to target
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen; // number -> index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    // Test case 1: Different from common examples
    vector<int> nums1 = {8, 12, 16, 4, 6};
    int target1 = 20;
    vector<int> result = twoSum(nums1, target1);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;  // Expected: [0,2] or [2,0]

    // Test case 2: Negative numbers involved
    vector<int> nums2 = {-3, 1, 7, 5, -2};
    int target2 = 4;
    result = twoSum(nums2, target2);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;  // Expected: [0,2]

    // Test case 3: Larger numbers
    vector<int> nums3 = {100, 250, 400, 600, 50};
    int target3 = 650;
    result = twoSum(nums3, target3);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;  // Expected: [1,3] or [3,1]

    return 0;
}
