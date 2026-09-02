/*
 * Problem Name: 42. Trapping Rain Water
 * Source: LeetCode
 * Difficulty: Hard
 * Time Complexity: O(N)
 * The two-pointer approach scans the array only once.
 * Two pointers move inward while maintaining the maximum
 * height encountered from the left and right sides.
 * Space Complexity: O(1)
 * Only a few scalar variables are used, so no extra
 * arrays or data structures are required.
 */
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        int left = 0;
        int right = height.size() - 1;   
        int left_max = 0;
        int right_max = 0;
        int total_water = 0;
        while (left < right) {
            if (height[left] < height[right]) {
                // If current height is greater than left_max, update it
                if (height[left] >= left_max) {
                    left_max = height[left];
                } else {
                    // Otherwise, it can trap water
                    total_water += left_max - height[left];
                }
                left++;
            } else {
                // If current height is greater than right_max, update it
                if (height[right] >= right_max) {
                    right_max = height[right];
                } else {
                    // Otherwise, it can trap water
                    total_water += right_max - height[right];
                }
                right--;
            }
        }
        return total_water;
    }
};

