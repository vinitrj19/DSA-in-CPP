// Asked in Optum interviews — recent (2026)

/*
 * Problem Name: 2000. Reverse Prefix of Word
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto it = word.find(ch);
        if (it != string::npos) {
            reverse(word.begin(), word.begin() + it + 1);
        }
        return word;
    }
};
