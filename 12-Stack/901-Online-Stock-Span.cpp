// Asked in Amazon interview — July 2025

/*
 * Problem Name: 901. Online Stock Span
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: Amortized O(1) per next() call
 * Space Complexity: O(n)
 */

#include <stack>
#include <utility>

class StockSpanner {
private:
    // Stack stores pairs of {price, index}
    std::stack<std::pair<int, int>> st;
    int currentIndex;

public:
    StockSpanner() {
        currentIndex = 0;
    }
    
    int next(int price) {
        currentIndex++;
        
        // Pop elements from the stack as long as they are less than or equal to the current price
        while (!st.empty() && st.top().first <= price) {
            st.pop();
        }
        
        // If stack is empty, all previous prices were smaller, so span is the current index
        // Otherwise, the span is the difference between the current index and the index of the last greater element
        int span = st.empty() ? currentIndex : (currentIndex - st.top().second);
        // Push the current price and its index onto the stack
        st.push({price, currentIndex});
        
        return span;
    }
};
