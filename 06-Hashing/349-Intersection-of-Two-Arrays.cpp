/*
 * Problem Name: 349. Intersection of Two Arrays
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(N + M)
 * A hash set is used to store the unique elements of nums1.
 * We then traverse nums2 and check whether each element exists
 * in the set. Each lookup takes O(1) on average.
 * Space Complexity: O(N)
 * A hash set is used to store the elements of nums1, and an
 * additional set is used to ensure that every result element
 * is unique.
 */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        vector<int> result;  
        for (int num : nums2) {
            if (set1.count(num)) {
                result.push_back(num);
                set1.erase(num); // Remove to ensure uniqueness in the result
            }
        }
        return result;
    }
};
