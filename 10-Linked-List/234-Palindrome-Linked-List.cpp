// Asked in Meta interview — August 2025

/*
 * Problem Name: 234. Palindrome Linked List
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* secondHalf = reverseList(slow->next);

        // Step 3: Compare the first and second halves
        ListNode* p1 = head;
        ListNode* p2 = secondHalf;
        bool isPalin = true;
        while (p2) {
            if (p1->val != p2->val) {
                isPalin = false;
                break;
            }
            p1 = p1->next;
            p2 = p2->next;
        }

        // Step 4 (Optional but good practice): Restore the list
        // slow->next = reverseList(secondHalf);

        return isPalin;
    }

private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
};
