// Asked in Amazon, Microsoft & Meta interviews

/*
 * Problem Name: 136. Single Number
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> counts;
        // Step 1: Count occurrences of each number
        for (int num : nums) {
            counts[num]++;
        }  
        // Step 2: Linear search through our counts to find the one that appeared exactly once
        for (auto& pair : counts) {
            if (pair.second == 1) {
                return pair.first;
            }
        }
        return -1; // Fallback (won't be reached given the problem constraints)
    }
};
