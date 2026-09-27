// Asked in Amazon, Microsoft & Apple interviews

/*
 * Problem Name: 217. Contains Duplicate
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true; // Duplicate found
            }
            seen.insert(num);
        }
        return false; // All elements are distinct
    }
};
