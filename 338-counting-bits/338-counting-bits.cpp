class Solution {
private :
    int countOne(int n)
    {
        int iCnt = 0;
        while(n != 0)
        {
            if(n & 1 == 1)
            {
                iCnt++;
            }
            n = n >> 1;
        }
        
        return iCnt;
    }

public:
    vector<int> countBits(int n) {
        vector<int> ans;
        
        for(int i = 0; i <= n; i++)
        {
            ans.push_back(countOne(i));
        }
        
        return ans;
    }
};