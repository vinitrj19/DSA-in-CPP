/*
 * Problem Name: 1475. Final Prices With a Special Discount in a Shop
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> st; // Stack to keep track of indices that haven't received a discount yet
        
        for (int i = 0; i < prices.size(); ++i) {
            // If we find a price smaller than or equal to the prices at the indices in our stack, 
            // it means we found their discount.
            while (!st.empty() && prices[st.back()] >= prices[i]) {
                prices[st.back()] -= prices[i]; // Apply the discount
                st.pop_back(); // This item's final price is settled
            }
            st.push_back(i);
        }
        
        return prices;
    }
};
