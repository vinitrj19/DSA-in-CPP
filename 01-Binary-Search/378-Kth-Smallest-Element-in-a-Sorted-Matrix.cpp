// Asked in Meta interview — July 2025

/*
 * Problem Name: 378. Kth Smallest Element in a Sorted Matrix
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n * log(max - min))
 * Space Complexity: O(1)
 */

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n - 1][n - 1];
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;
            int r = n - 1;
            int c = 0;
            
            while (r >= 0 && c < n) {
                if (matrix[r][c] <= mid) {
                    count += (r + 1);
                    c++;
                } else {
                    r--;
                }
            }
            
            if (count < k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        return low;
    }
};
