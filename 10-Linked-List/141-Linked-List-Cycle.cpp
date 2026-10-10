// Asked in Visa SWE interview — January 2026

/*
 * Problem Name: 141. Linked List Cycle
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Initialize both slow and fast pointers to the head of the list
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Traverse the list until fast reaches the end (NULL)
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // Moves 1 step at a time
            fast = fast->next->next;    // Moves 2 steps at a time
            
            // If there's a cycle, the fast pointer will eventually wrap around and meet the slow pointer
            if (slow == fast) {
                return true;
            }
        }
        
        // If we reach the end of the list, there is no cycle
        return false;
    }
};
