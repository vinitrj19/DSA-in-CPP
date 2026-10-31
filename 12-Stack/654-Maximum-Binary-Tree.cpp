/*
 * Problem Name: 654. Maximum Binary Tree
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n^2)
 * Space Complexity: O(n) 
 */

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode*> stk;
        
        for (int num : nums) {
            TreeNode* curr = new TreeNode(num);
            while (!stk.empty() && stk.back()->val < num) {
                curr->left = stk.back();
                stk.pop_back();
            }
            if (!stk.empty()) {
                stk.back()->right = curr;
            }
            
            stk.push_back(curr);
        }
        return stk.front();
    }
};
