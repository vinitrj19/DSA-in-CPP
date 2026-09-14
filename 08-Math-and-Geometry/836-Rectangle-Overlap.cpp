/*
 * Problem Name: 836. Rectangle Overlap
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // Check overlap on x-axis
        bool xOverlap = max(rec1[0], rec2[0]) < min(rec1[2], rec2[2]);
        // Check overlap on y-axis
        bool yOverlap = max(rec1[1], rec2[1]) < min(rec1[3], rec2[3]);       
        return xOverlap && yOverlap;
    }
};
