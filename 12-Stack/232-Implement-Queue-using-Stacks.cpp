/*
 * Problem Name: 232. Implement Queue using Stacks
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: Amortized O(1) per operation
 * Space Complexity: O(n)
 */

#include <stack>

class MyQueue {
private:
    std::stack<int> in_stack;
    std::stack<int> out_stack;
    void transferIfNeeded() {
        if (out_stack.empty()) {
            while (!in_stack.empty()) {
                out_stack.push(in_stack.top());
                in_stack.pop();
            }
        }
    }

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        in_stack.push(x);
    }
    
    int pop() {
        transferIfNeeded();
        int val = out_stack.top();
        out_stack.pop();
        return val;
    }
    
    int peek() {
        transferIfNeeded();
        return out_stack.top();
    }
    
    bool empty() {
        return in_stack.empty() && out_stack.empty();
    }
};
