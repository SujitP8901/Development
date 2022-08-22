class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        
        vector<int> ans;        
        vector<int> minRow(row, INT_MAX);
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] < minRow[i])
                {
                    minRow[i] = matrix[i][j];
                }
            }
        }
        
        vector<int> maxCol(col, 0);
        
        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < row; j++)
            {
                if(matrix[j][i] > maxCol[i])
                {
                    maxCol[i] = matrix[j][i];
                }
            }
        }
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if((matrix[i][j] == minRow[i]) && (matrix[i][j] == maxCol[j]))
                {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        
        return ans;
        
    }
};