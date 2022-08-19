class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0, end = row*col-1, mid = 0, element = 0;
        
        while(start <= end)
        {
            mid = (start+end)/2;
            
            element = matrix[mid/col][mid%col];
            
            if(element == target)
            {
                break;
            }
            else if(element > target)
            {
                end = mid-1;
            }
            else if(element < target)
            {
                start = mid+1;
            }                
        }
        
        if(start > end)
        {
            return false;
        }
        return true;
    }
};