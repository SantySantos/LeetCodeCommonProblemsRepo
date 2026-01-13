#include <iostream>
#include <ostream>
#include "StringsAndArrays.h"

/*
* Problem: Best Time to Buy and Sell Stock
* Description: You are given an array prices where prices[i] is the price of a given stock on the ith day.
* Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*
* Approach: 
*
* Time complexity: O(n)
*/
int  StringsAndArrays::maxProfit(vector<int>& prices)
{

    int buy = prices[0];
    int sell = prices[0];
    int profit = sell - buy;
    
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] < buy)
        {
            buy = prices[i];
            sell = prices[i];
        }
        else if (prices[i] > sell)
            sell = prices[i];

        profit = std::max(profit, sell-buy);
    }
    
    return profit;
}
