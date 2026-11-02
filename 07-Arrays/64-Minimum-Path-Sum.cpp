// Asked in Oracle interview — March 2026
// Asked in SpaceX interview — March 2025

/*
 * Problem Name: 64. Minimum Path Sum
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(m * n)
 * Space Complexity: O(1) auxiliary space
 */

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 1; i < m; ++i) {
            grid[i][0] += grid[i-1][0];
        }
        for (int j = 1; j < n; ++j) {
            grid[0][j] += grid[0][j-1];
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                grid[i][j] += std::min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[m-1][n-1];
    }
};
