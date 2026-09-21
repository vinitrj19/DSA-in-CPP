// Asked in Apple interview — 2026

/*
 * Problem Name: 138. Copy List with Random Pointer
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        // Part 1: Insert copied nodes right after the original nodes
        // Example: A -> B becomes A -> A' -> B -> B'
        Node* curr = head;
        while (curr) {
            Node* copyNode = new Node(curr->val);
            copyNode->next = curr->next;
            curr->next = copyNode;
            curr = copyNode->next;
        }
      // Part 2: Set random pointers of the copied nodes
        curr = head;
        while (curr) {
            if (curr->random) {
                // The copied node is curr->next. 
                // Its random pointer should point to the copy of curr->random.
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next; // Move to the next original node
        }

        // Part 3: Separate the original and copied list
        curr = head;
        Node* copyHead = head->next;
        Node* copyCurr = copyHead;

        while (curr) {
            // Restore original list
            curr->next = curr->next->next;
            
            // Connect copied nodes
            if (copyCurr->next) {
                copyCurr->next = copyCurr->next->next;
            }
            
            // Advance pointers
            curr = curr->next;
            copyCurr = copyCurr->next;
        }

        return copyHead;
    }
};
