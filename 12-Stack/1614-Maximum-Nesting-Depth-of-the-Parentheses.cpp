// Asked in Meta interview — February 2026

/*
 * Problem Name: 1614. Maximum Nesting Depth of the Parentheses
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int maxDepth(string s) {
        int max_depth = 0;
        int current_depth = 0;
        
        for (char c : s) {
            if (c == '(') {
                current_depth++;
                max_depth = max(max_depth, current_depth);
            } else if (c == ')') {
                current_depth--;
            }
        }
        return max_depth;
    }
};
