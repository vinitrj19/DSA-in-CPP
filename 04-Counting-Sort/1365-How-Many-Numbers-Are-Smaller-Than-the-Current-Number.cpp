/*
 * Problem Name: 1365. How Many Numbers Are Smaller Than the Current Number
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(N + K)
 * The frequency of each number is stored using a counting array.
 * Prefix sums are then used to determine how many numbers are
 * smaller than each value.
 * Here, K is the maximum possible value in the array.
 * Space Complexity: O(K)
 * A counting array of size K + 1 is used to store frequencies
 * and calculate the number of smaller elements.
 */
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0);
        vector<int> result;
        // 1. Count frequencies of each number
        for (int num : nums) {
            count[num]++;
        }
        // 2. Convert to a prefix sum
        // After this loop, count[i] holds the total number of elements <= i
        for (int i = 1; i <= 100; i++) {
            count[i] += count[i - 1];
        }
        // 3. Map the counts to the result
        for (int num : nums) {
            if (num == 0) {
                result.push_back(0);
            } else {
                // The number of elements strictly smaller than 'num' is count[num - 1]
                result.push_back(count[num - 1]);
            }
        }
        return result;
    }
};
