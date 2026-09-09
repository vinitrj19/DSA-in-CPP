/*
 * Problem Name: 35. Search Insert Position
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(log N)
 * Binary search is used because the array is sorted.
 * In each iteration, the search space is reduced by half.
 * Space Complexity: O(1)
 * Only a few scalar variables are used, so no extra
 * array or data structure is required.
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2; // Prevents potential integer overflow
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        // If the target is not found, 'left' will be at the correct insertion index
        return left;
    }
};
