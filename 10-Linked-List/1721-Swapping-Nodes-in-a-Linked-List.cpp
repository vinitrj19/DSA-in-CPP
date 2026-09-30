/*
 * Problem Name: 1721. Swapping Nodes in a Linked List
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head;
        ListNode* right = head;
        ListNode* curr = head;

        // Advance curr to the k-th node from the beginning
        for (int i = 1; i < k; ++i) {
            curr = curr->next;
        }
        left = curr;
        while (curr->next != nullptr) {
            curr = curr->next;
            right = right->next;
        }

        // Swap the values of the two located nodes
        std::swap(left->val, right->val);
        return head;
    }
};
