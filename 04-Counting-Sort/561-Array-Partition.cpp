/*
 * Problem Name: 561. Array Partition
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n log n)
 * Space Complexity: O(log n)
 */

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int maxSum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            maxSum += nums[i];
        }
        
        return maxSum;
    }
};
