// Asked in Uber interview — April 2026

/*
 * Problem Name: 173. Binary Search Tree Iterator
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(1) amortized per next() call
 * Space Complexity: O(h)
 */

class BSTIterator {
private:
    std::stack<TreeNode*> st;

    // Helper function to push all left children of a given node
    void pushAllLeft(TreeNode* node) {
        while (node != nullptr) {
            st.push(node);
            node = node->left;
        }
    }

public:
    BSTIterator(TreeNode* root) {
        // Initialize the stack with the left spine of the tree
        pushAllLeft(root);
    }
    
    int next() {
        // The top of the stack is always the next smallest element
        TreeNode* topNode = st.top();
        st.pop();
        
        // If the node has a right child, we push its entire left spine
        if (topNode->right != nullptr) {
            pushAllLeft(topNode->right);
        }
        
        return topNode->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};
