// Asked in Microsoft interview — February 2026
// Asked in Uber interview — August 2025

/*
 * Problem Name: 384. Shuffle an Array
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n) per shuffle
 * Space Complexity: O(n)
 */

class Solution {
    vector<int> original;
    mt19937 rng;
public:
    Solution(vector<int>& nums) : original(nums), rng(random_device{}()) {}
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        vector<int> shuffled = original;
        std::shuffle(shuffled.begin(), shuffled.end(), rng);
        return shuffled;
    }
};
