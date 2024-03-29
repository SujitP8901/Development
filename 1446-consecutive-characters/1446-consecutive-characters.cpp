class Solution {
public:
    int maxPower(string s) {
        int iCnt = 1, iMaxCnt = 0;
        
        if(s.length() == 1)
        {
            return 1;
        }
        
        for(int i = 0; i < s.length()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                iCnt++;
            }
            else
            {
                if(iCnt > iMaxCnt)
                {
                    iMaxCnt = iCnt;
                }
                
                iCnt = 1;
            }
        }
        
        if(iCnt > iMaxCnt)
        {
            iMaxCnt = iCnt;
        }
        
        return iMaxCnt;
    }
};