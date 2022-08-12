class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        int iCnt = 0;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = col-1; j >= 0; j--)
            {
                if(grid[i][j] < 0)
                {
                    iCnt++;
                }
                else
                {
                    break;
                }
            }
        }
        
        return iCnt;
    }
};