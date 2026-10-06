// Asked in Wells Fargo interviews — recent (2026)

/*
 * Problem Name: 2696. Minimum String Length After Removing Substrings
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    int minLength(string s) {
        string st = ""; // Acting as a stack
        for (char c : s) {
            int n = st.length();
            // Check if current character forms "AB" or "CD" with the top of the stack
            if (n > 0 && ((st[n - 1] == 'A' && c == 'B') || (st[n - 1] == 'C' && c == 'D'))) {
                st.pop_back(); // Remove the matching character
            } else {
                st.push_back(c); // Otherwise, push the character onto our stack
            }
        }
        return st.length();
    }
};
