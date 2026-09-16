// Asked in Amazon & Meta interviews

/*
 * Problem Name: 66. Plus One
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Traverse the array from right to left (least significant to most)
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the digit is 9, it becomes 0 and we carry over the 1 to the next iteration
            digits[i] = 0; 
        }
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};
