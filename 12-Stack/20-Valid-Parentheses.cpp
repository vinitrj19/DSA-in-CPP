// Asked in Microsoft interview — 2026 Q1

/*
 * Problem Name: 20. Valid Parentheses
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <stack>
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        
        for (char c : s) {
            // If it's a closing bracket, check the stack
            if (c == ')' || c == '}' || c == ']') {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
