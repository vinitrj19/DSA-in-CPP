// Asked in Amazon interview — June 2026

/*
 * Problem Name: 74. Search a 2D Matrix
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(log(M * N))
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Treat the 2D matrix as a 1D array of length m * n
        int left = 0;
        int right = m * n - 1;
        
        while (left <= right) {
            // Prevent potential integer overflow
            int mid = left + (right - left) / 2;
            
            // Map the 1D index back to 2D row and column indices
            int mid_val = matrix[mid / n][mid % n];
            
            if (mid_val == target) {
                return true;
            } else if (mid_val < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return false;
    }
};
