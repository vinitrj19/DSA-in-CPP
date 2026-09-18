// Asked in Meta & Apple interviews — March 2026

/*
 * Problem Name: 11. Container With Most Water
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_water = 0;
        while (left < right) {
            int w = right - left;
            int h = min(height[left], height[right]);
            max_water = max(max_water, w * h);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_water;
    }
};
