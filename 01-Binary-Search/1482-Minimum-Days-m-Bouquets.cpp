//asked in amazon this year
/*
 * Problem Name: 1482. Minimum Number of Days to Make m Bouquets
 * Source: LeetCode
 * Difficulty: Medium
 * 
 * Time Complexity: O(N * log(Max_Element - Min_Element)) 
 *                  Where N is the size of the bloomDay array. 
 *                  The binary search takes log(Max-Min) steps, and the helper function scans the array in O(N).
 * 
 * Space Complexity: O(1) 
 *                   Only a few scalar variables are used for checking feasibility.
 */
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        // If total required flowers exceed the available flowers, it's impossible
        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }
        // Set up binary search range
        int low = 1;
        int high = 0;
        for (int day : bloomDay) {
            high = max(high, day);
        }
        int ans = -1;
        // Binary search for the minimum days
        while (low <= high) {
            int mid = low + (high - low) / 2;
            // Check if we can make 'm' bouquets within 'mid' days
            int bouquets = 0;
            int consecutive_flowers = 0;
            for (int day : bloomDay) {
                if (day <= mid) {
                    consecutive_flowers++;
                    if (consecutive_flowers == k) {
                        bouquets++;
                        consecutive_flowers = 0; // Reset for next bouquet
                    }
                } else {
                    consecutive_flowers = 0; // Reset due to a non-bloomed flower
                }
            }
            if (bouquets >= m) {
                ans = mid;        // Current mid is viable, try to find a smaller day
                high = mid - 1;
            } else {
                low = mid + 1;    // Not enough bouquets, need more days
            }
        }
        return ans;
    }
};

