/*
 * Problem Name: 389. Find the Difference
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        
        // Add ASCII values of string t
        for (char c : t) {
            sum += c;
        }
        
        // Subtract ASCII values of string s
        for (char c : s) {
            sum -= c;
        }
        
        // The remaining value is the ASCII of the extra character
        return (char)sum;
    }
};
