/*
 * Problem Name: 744. Find Smallest Letter Greater Than Target
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(log N)
 * Binary search is used because the letters array is sorted.
 * The search identifies the first character that is
 * lexicographically greater than the target.
 * If no such character exists, the first character is returned
 * because the array wraps around.
 * Space Complexity: O(1)
 * Only a few scalar variables are used, so no extra
 * array or data structure is required.
 */

#include <vector>
#include <algorithm>
class Solution {
public:
    char nextGreatestLetter(const std::vector<char>& letters, char target) {
        auto it = std::upper_bound(letters.begin(), letters.end(), target);
        // If 'it' reaches the end, no element is strictly greater, so wrap around to the first element
        return it == letters.end() ? letters[0] : *it;
    }
};
