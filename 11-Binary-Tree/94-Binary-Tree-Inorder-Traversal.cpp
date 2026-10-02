// Asked in Meta interview — July 2025

/*
 * Problem Name: 94. Binary Tree Inorder Traversal
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
private:
    void inorder(TreeNode* node, vector<int>& result) {
        if (!node) return;
        inorder(node->left, result);    // 1. Visit left
        result.push_back(node->val);    // 2. Visit root
        inorder(node->right, result);   // 3. Visit right
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }
};
