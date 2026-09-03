/*
 * Problem Name: 121. Best Time to Buy and Sell Stock
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(N)
 * The array is traversed only once while keeping track
 * of the minimum price seen so far and the maximum profit.
 * Space Complexity: O(1)
 * Only a few scalar variables are used, so no extra
 * array or data structure is required.
 */
  class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0; 
        for (int price : prices) {
            // Update the minimum price if a lower one is found
            if (price < min_price) {
                min_price = price;
            } 
            // Calculate profit if sold today, and update max_profit if it's higher
            else if (price - min_price > max_profit) {
                max_profit = price - min_price;
            }
        }
        return max_profit;
    }
};
