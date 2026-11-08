/*
 * Problem Name: 942. DI String Match
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(n) for output
 */

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int low = 0;
        int high = n;
        
        vector<int> res;
        res.reserve(n + 1); 
        
        for (char c : s) {
            if (c == 'I') {
                res.push_back(low++);
            } else {
                res.push_back(high--);
            }
        }
        res.push_back(low); 
        return res;
    }
};
