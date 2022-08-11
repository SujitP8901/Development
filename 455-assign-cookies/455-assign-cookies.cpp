class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int iCnt = 0, i = 0, j = 0;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        for(j = 0; i < g.size() && j < s.size(); j++)
        {
            if(s[j] >= g[i])
            {
                iCnt++;
                i++;
            }
        }
        
        return iCnt;
    }
};