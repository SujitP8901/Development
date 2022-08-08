class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        bool bFlag = true;
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        
        int dy = y1-y0;
        int dx = x1-x0;
        
        int x = 0, y = 0;
        
        int n = coordinates.size();
        
        for(int i = 2; i < n; i++)
        {
            x = coordinates[i][0];
            y = coordinates[i][1];
            
            if( ( dx * (y-y0) ) != ( dy * (x-x0) ) )
            {
                bFlag = false;
                break;
            }
        }
        
        return bFlag;
    }
};