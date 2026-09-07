/*
 * Problem Name: 268. Missing Number
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(N)
 * The array is traversed once using the XOR operation.
 * XOR of a number with itself becomes 0, while XOR with 0
 * leaves the number unchanged. Therefore, all numbers that
 * appear in the array cancel out, leaving only the missing number.
 * Space Complexity: O(1)
 * Only one variable is used to store the XOR result, so
 * no extra array or data structure is required.
 */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // Sum of first n natural numbers
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        } 
        return expectedSum - actualSum;
    }
};
