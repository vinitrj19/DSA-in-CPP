/*
 * Problem Name: 589. N-ary Tree Preorder Traversal
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    vector<int> preorder(Node* root) {
        if (!root) return {};
        
        vector<int> result;
        stack<Node*> st;
        st.push(root);
        
        while (!st.empty()) {
            Node* current = st.top();
            st.pop();
            result.push_back(current->val);
            for (auto it = current->children.rbegin(); it != current->children.rend(); ++it) {
                st.push(*it);
            }
        }
        
        return result;
    }
};
