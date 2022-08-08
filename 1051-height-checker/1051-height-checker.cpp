class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        int iCnt = 0;
        
        sort(expected.begin(), expected.end());
        
        for(int i = 0; i < heights.size(); i++)
        {
            if(heights[i] != expected[i])
            {
                iCnt++;
            }
        }
        
        return iCnt;
    }
};