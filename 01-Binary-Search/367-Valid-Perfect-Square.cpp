// Asked in LinkedIn interview — 2026
/*
 * Problem Name: 367. Valid Perfect Square
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(log N)
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1) return false;
        
        long long left = 1;
        long long right = num;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;
            
            if (square == num) {
                return true;
            } else if (square < num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return false;
    }
};
