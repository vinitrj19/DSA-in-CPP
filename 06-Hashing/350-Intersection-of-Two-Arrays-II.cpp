/*
 * Problem Name: 350. Intersection of Two Arrays II
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(N + M)
 * A hash map is used to store the frequency of each element
 * in nums1. We then traverse nums2 and add an element to
 * the result only when its remaining frequency is greater
 * than zero.
 * Space Complexity: O(N)
 * An unordered_map is used to store the frequency of elements
 * from nums1.
 */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // Sort both vectors as required by std::set_intersection
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;
        // Use back_inserter to automatically push matching elements into result
        set_intersection(nums1.begin(), nums1.end(), 
                         nums2.begin(), nums2.end(), 
                         back_inserter(result));
        return result;
    }
};
