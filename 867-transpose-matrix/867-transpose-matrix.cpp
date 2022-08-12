class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        vector<int> newRow;
        
        int i = 0, j = 0, row = matrix.size(), col = matrix[0].size();
        
        for(i = 0; i < col; i++)
        {
            newRow.clear();
            
            for(j = 0; j < row; j++)
            {
                newRow.push_back(matrix[j][i]);
            }
            
            ans.push_back(newRow);
        }
        
        return ans;
    }
};