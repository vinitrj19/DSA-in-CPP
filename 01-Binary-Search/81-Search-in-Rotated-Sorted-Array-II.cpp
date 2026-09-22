// Asked in Amazon, Google, Microsoft & Meta interviews

/*
 * Problem Name: 81. Search in Rotated Sorted Array II
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n) worst case
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return true;
            }
            // Edge case: Duplicates obscure the sorted half
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
            } 
            // Left half is sorted
            else if (nums[left] <= nums[mid]) {
                // Check if target is strictly within the left sorted bounds
                if (target >= nums[left] && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } 
            // Right half is sorted
            else {
                // Check if target is strictly within the right sorted bounds
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};
