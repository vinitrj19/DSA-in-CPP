/*
 * Problem Name: 344. Reverse String
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        std::reverse(s.begin(), s.end());
    }
};
