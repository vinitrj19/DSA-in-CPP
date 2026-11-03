// Asked in Amazon interview — 2024

/*
 * Problem Name: 714. Best Time to Buy and Sell Stock with Transaction Fee
 * Source: LeetCode
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int cash = 0; 
        int hold = -prices[0]; 
        
        for (int i = 1; i < prices.size(); ++i) {
            cash = max(cash, hold + prices[i] - fee);
         
            hold = max(hold, cash - prices[i]); 
        }
        
        return cash; 
    }
};
