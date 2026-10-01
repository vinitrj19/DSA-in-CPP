/*
 * Problem Name: 720. Longest Word in Dictionary
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n log n + L)
 * Space Complexity: O(n)
 */

class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        
        unordered_set<string> built_words;
        string longest = "";
        
        for (const string& word : words) {
            if (word.length() == 1 || built_words.count(word.substr(0, word.length() - 1))) {
                built_words.insert(word);
                if (word.length() > longest.length()) {
                    longest = word;
                }
            }
        }
        return longest;
    }
};
