/*
 * Problem Name: 1732. Find the Highest Altitude
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAltitude = 0;
        int maxAltitude = 0;
        
        for (int g : gain) {
            currentAltitude += g;
            maxAltitude = max(maxAltitude, currentAltitude);
        }
        return maxAltitude;
    }
};
