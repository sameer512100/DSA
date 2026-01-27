/*
121. Best Time to Buy and Sell Stock
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

*/

/*

SAMEER THE IDEA IS TO NOTE DOWN THE LEAST VALUE WE SAW
SO BASICALLY WHATS GOING ON IS
WE CAN BUY A STOCK AND SELL IT IN FUTURE
IN THIS PROBLEM 
ONLY ONE TRASACTION IS NECESSARY
OTHER VERSIONS OF THIS PROBLEM CONSISTS OF MAXIMISATION OF PROFIT

OK SO LETS LOOK AT THIS ONE TRANSAC....
ITS EASY
KEEP AN EYE ON THE LEAST VALUE WE SAW
AND TAKE A variable that calculates the current value-previous least value 
anthey ra babu

*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mini = prices[0];
        int res = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            mini = min(prices[i], mini);
            res = max(res, prices[i] - mini);
        }
        return res;
    }
};