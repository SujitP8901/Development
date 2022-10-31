class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i = 0, j = 0, row = matrix.size(), col = matrix[0].size();
        
        bool bFlag = true;
        
        for(i = 0; i < row-1; i++)
        {
            for(j = 0; j < col-1; j++)
            {
                if(matrix[i][j] != matrix[i+1][j+1])
                {
                    bFlag = false;
                    break;
                }
            }
            
            if(bFlag == false)
            {
                break;
            }
        }
        
        return bFlag;
    }
};