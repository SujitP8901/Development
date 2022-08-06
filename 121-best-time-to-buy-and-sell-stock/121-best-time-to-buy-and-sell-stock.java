class Solution {
    public int maxProfit(int[] arr) 
    {

        int min = arr[0], profit = 0, maxProfit = 0;
        
        for(int i = 1; i < arr.length; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
            
            profit = arr[i] - min;
            
            if(profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        
        return maxProfit;
        
    }
}