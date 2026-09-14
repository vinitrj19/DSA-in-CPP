/*
 * Asked in Amazon, Microsoft, Goldman Sachs, Meta & IBM interviews
 * Problem Name: 1752. Check if Array Is Sorted and Rotated
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};
