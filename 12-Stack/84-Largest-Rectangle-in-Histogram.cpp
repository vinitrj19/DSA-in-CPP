// Asked in Unthinkable Solutions interview — September 2026

/*
 * Problem Name: 84. Largest Rectangle in Histogram
 * Source: LeetCode
 * Difficulty: Hard
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<int> st;

        // Finding the first smaller element on the left for each bar
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            // If stack is empty, there is no smaller element, so left boundary is -1
            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        // Clearing stack to reuse it
        while (!st.empty()) {
            st.pop();
        }

        // Finding the first smaller element on the right for each bar
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            // If stack is empty, there is no smaller element, so right boundary is n
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // Calculate max area using your width formula: (r - l - 1)
        int maxArea = 0;
        for (int i = 0; i < n; ++i) {
            int width = right[i] - left[i] - 1;
            int currentArea = heights[i] * width;
            maxArea = max(maxArea, currentArea);
        }

        return maxArea;
    }
};
