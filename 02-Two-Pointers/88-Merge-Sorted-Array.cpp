// Asked in Meta interview — April 2026

/*
 * Problem Name: 88. Merge Sorted Array
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(m + n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;       // Pointer for the end of the valid elements in nums1
        int j = n - 1;       // Pointer for the end of nums2
        int k = m + n - 1;   // Pointer for the end of the total space in nums1

        // While there are still elements to merge from nums2
        while (j >= 0) {
            // If nums1 has elements left and the current nums1 element is larger
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--; // Move the insertion pointer backwards
        }
    }
};
