class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0, totalWealth = 0;
        
        for(int i = 0; i < accounts.size(); i++)
        {
            totalWealth = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            
            if(totalWealth > maxWealth)
            {
                maxWealth = totalWealth;
            }
        }
        
        return maxWealth;
    }
};