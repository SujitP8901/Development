class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0)
        {
            return 0;
        }
        
        int ansIndex = -1, j = 0, iCnt = 0, k = 0;
        
        for(int i = 0; i < haystack.size(); i++)
        {
            if(haystack[i] == needle[0])
            {
                // ansIndex = i;
                for(j = i; j < (i+needle.size()); j++)
                {
                    if(haystack[j] == needle[k])
                    {
                        k++;
                        iCnt++;
                    }
                    else
                    {
                        break;
                    }
                }
                
                if(iCnt == needle.size())
                {
                    ansIndex = i;
                    break;
                }
                else
                {
                    ansIndex = -1;
                    iCnt = 0;
                    k = 0;
                }
            }
            
            
        }
        return ansIndex;
    }
};