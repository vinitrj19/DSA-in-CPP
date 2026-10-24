/*
 * Problem Name: 442. Find All Duplicates in an Array
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1) auxiliary, excluding output
 */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0) {
                duplicates.push_back(index + 1);
            } else {
                nums[index] = -nums[index];
            }
        }
        return duplicates;
    }
};
