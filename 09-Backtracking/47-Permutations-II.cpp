// Asked in Microsoft interview — April 2026

/*
 * Problem Name: 47. Permutations II
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n × n!)
 * Space Complexity: O(n × n!)
 */

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        do {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return result;
    }
};
