/*
 * Problem Name: 26. Remove Duplicates from Sorted Array
 * Source: LeetCode
 * Difficulty: Easy
 *
 * Time Complexity: O(N)
 *
 * The array is traversed once using two pointers.
 * The fast pointer scans the array, while the slow pointer
 * keeps track of the position where the next unique element
 * should be placed.
 *
 * Space Complexity: O(1)
 *
 * The duplicates are removed in-place, so no extra array
 * or data structure is required.
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int k = 1; // Tracks the position of the next unique element
        
        for (int i = 1; i < nums.size(); i++) {
            // If the current element is different from the previous one, it's unique
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // Move it to the unique section
                k++;
            }
        }
        
        return k; // Return the count of unique elements
    }
};
