// Asked in Amazon, Apple, Google, Meta & Microsoft interviews

/*
 * Problem Name: 206. Reverse Linked List
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
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            // Store the next node
            ListNode* nextNode = curr->next;
            
            // Reverse the current node's pointer
            curr->next = prev;
            
            // Move pointers one position ahead
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
};
