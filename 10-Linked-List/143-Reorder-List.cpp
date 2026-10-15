/*
 * Problem Name: 143. Reorder List
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        slow->next = nullptr; // Sever the first half from the second half

        while (curr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }

        // Step 3: Merge the two halves
        ListNode* first = head;
        ListNode* second = prev; // 'prev' now points to the head of the reversed second half

        while (second) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};
