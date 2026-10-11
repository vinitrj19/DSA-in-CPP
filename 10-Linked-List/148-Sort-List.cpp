/*
 * Problem Name: 148. Sort List
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n log n)
 * Space Complexity: O(log n)
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        int n = 0;
        for (ListNode* curr = head; curr; curr = curr->next) n++;

        ListNode dummy(0, head);

        for (int step = 1; step < n; step <<= 1) {
            ListNode* prev = &dummy;
            ListNode* curr = dummy.next;

            while (curr) {
                ListNode* left = curr;
                ListNode* right = split(left, step);
                curr = split(right, step);
                prev = merge(left, right, prev);
            }
        }

        return dummy.next;
    }

private:
    ListNode* split(ListNode* head, int step) {
        if (!head) return nullptr;
        for (int i = 1; head->next && i < step; i++) {
            head = head->next;
        }
        ListNode* nextPart = head->next;
        head->next = nullptr;
        return nextPart;
    }

    ListNode* merge(ListNode* l1, ListNode* l2, ListNode* prev) {
        ListNode* curr = prev;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        curr->next = l1 ? l1 : l2;
        while (curr->next) curr = curr->next;
        return curr;
    }
};
