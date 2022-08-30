class Solution {
private :
    void rotate(vector<vector<int>>& arr)
    {
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            reverse(arr[i].begin(), arr[i].end());
        }
    }
    
    bool checkEqual(vector<vector<int>>& mat1, vector<vector<int>>& mat2)
    {
        int n = mat1.size(), i = 0, j = 0;
        
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(mat1[i][j] != mat2[i][j])
                {
                    break;
                }
            }
            if(j != n)
            {
                break;
            }
        }
        
        if(i != n)
        {
            return false;
        }
        return true;
    }
    
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        
        if(n == 1)
        {
            return (mat[0][0] == target[0][0]);
        }
        
        int i = 0, j = 0;
        vector<vector<int>> ans = mat;
        bool bFlag = false;
        
        if(checkEqual(mat, target))
        {
            bFlag = true;
        }
        else
        {
            while(true)
            {
                rotate(ans);
            
                if(checkEqual(mat,ans))
                {
                    bFlag = false;
                    break;
                }
                else if(checkEqual(ans, target))
                {
                    bFlag = true;
                    break;
                }
            }
        }
        return bFlag;
    }
};