/*
 * Problem Name: 114. Flatten Binary Tree to Linked List
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        
        while (curr != nullptr) {
            if (curr->left != nullptr) {
                TreeNode* rightmost = curr->left;
                while (rightmost->right != nullptr) {
                    rightmost = rightmost->right;
                }
                rightmost->right = curr->right;
                curr->right = curr->left;
                curr->left = nullptr;
            }
            curr = curr->right;
        }
    }
};
