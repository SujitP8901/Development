class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
         
        vector<vector<int>> ans(m, vector<int>(n));
         
        if(m*n != original.size())
        {
            ans.clear();
            return ans;
        }
        
        
        int i = 0, j = 0, iCnt = 0;
        
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                ans[i][j] = original[iCnt];
                iCnt++;
            }
        }
        
        return ans;
    }
};