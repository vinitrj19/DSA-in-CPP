// Asked in Microsoft interview — July 2026

/*
 * Problem Name: 160. Intersection of Two Linked Lists
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(m + n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;
        
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        while (ptrA != ptrB) {
            ptrA = ptrA ? ptrA->next : headB;
            ptrB = ptrB ? ptrB->next : headA;
        }
        
        return ptrA;
    }
};
