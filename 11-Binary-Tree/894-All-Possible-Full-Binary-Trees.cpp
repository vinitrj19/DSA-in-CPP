/*
 * Problem Name: 894. All Possible Full Binary Trees
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: Output-sensitive; proportional to the number of generated trees
 * Space Complexity: Output-sensitive; proportional to the number of generated trees
 */

class Solution {
    vector<vector<TreeNode*>> memo;

public:
    Solution() : memo(21) {}

    vector<TreeNode*> allPossibleFBT(int n) {
        if (n % 2 == 0) return {};
        
        if (n == 1) return {new TreeNode(0)};
        if (!memo[n].empty()) return memo[n];
        
        vector<TreeNode*> res;
        for (int i = 1; i < n; i += 2) {
            vector<TreeNode*> leftTrees = allPossibleFBT(i);
            vector<TreeNode*> rightTrees = allPossibleFBT(n - 1 - i);
            for (TreeNode* left : leftTrees) {
                for (TreeNode* right : rightTrees) {
                    res.push_back(new TreeNode(0, left, right));
                }
            }
        }
        
        return memo[n] = res;
    }
};
