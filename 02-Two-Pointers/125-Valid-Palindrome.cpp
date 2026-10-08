// Asked in Apple interview — June 2026

/*
 * Problem Name: 125. Valid Palindrome
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
