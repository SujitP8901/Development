class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, maxProfit = 0, i = 0;
        
        for(i = 0; i < prices.size()-1; i++)
        {
            profit = prices[i+1] - prices[i];
            
            if(maxProfit + profit > maxProfit)
            {
                maxProfit = maxProfit + profit;
            }
            
        }
        
        return maxProfit;
    }
};