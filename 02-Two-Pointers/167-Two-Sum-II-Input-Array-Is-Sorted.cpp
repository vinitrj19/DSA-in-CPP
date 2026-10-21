// Asked in Google interview — November 2025

/*
 * Problem Name: 167. Two Sum II - Input Array Is Sorted
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, end = numbers.size() - 1;
        vector<int> ans;
        while (st < end) {
            int currSum = numbers[st] + numbers[end];
            
            if (currSum == target) {
                ans.push_back(st + 1);
                ans.push_back(end + 1);
                return ans;
            } else if (currSum > target) {
                end--;
            } else {
                st++;
            }
        }
        return ans;
    }
};
