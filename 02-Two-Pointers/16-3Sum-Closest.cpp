// Asked in TikTok interview — June 2026
// Asked in Harness interviews — 2026

/*
 * Problem Name: 16. 3Sum Closest
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n²)
 * Space Complexity: O(1)
 */

#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        std::ranges::sort(nums);
        
        int closest_sum = nums[0] + nums[1] + nums[2];
        const int n = nums.size();
        
        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                const int current_sum = nums[i] + nums[left] + nums[right];
                
                if (current_sum == target) {
                    return current_sum;
                }
                
                if (std::abs(target - current_sum) < std::abs(target - closest_sum)) {
                    closest_sum = current_sum;
                }
                
                if (current_sum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        
        return closest_sum;
    }
};
