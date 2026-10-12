// Asked in Microsoft interviews — November 2025 / Q1 2026

/*
 * Problem Name: 151. Reverse Words in a String
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, result;
        vector<string> words;
        
        // Automatically extracts words while ignoring all extra spaces
        while (ss >> word) {
            words.push_back(word);
        }
        
        // Join words in reverse order
        for (int i = words.size() - 1; i >= 0; --i) {
            result += words[i];
            if (i > 0) result += " ";
        }
        
        return result;
    }
};
