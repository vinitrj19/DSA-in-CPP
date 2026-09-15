/*
 * Problem Name: 3622. Check Divisibility by Digit Sum and Product
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int digit_sum = 0;
        long long digit_product = 1; // Using long long to prevent overflow during product calculation
        while (temp > 0) {
            int digit = temp % 10;
            digit_sum += digit;
            digit_product *= digit;
            temp /= 10;
        }
        return n % (digit_sum + digit_product) == 0;
    }
};
