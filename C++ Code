#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to return indices of two numbers that add up to target
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen; // stores number -> index
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            // Found the pair
            return {seen[complement], i};
        }
        seen[nums[i]] = i; // store current number with its index
    }
    return {}; // Should never happen since one solution is guaranteed
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    // Test additional cases
    nums = {3, 2, 4};
    target = 6;
    result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    nums = {3, 3};
    target = 6;
    result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
