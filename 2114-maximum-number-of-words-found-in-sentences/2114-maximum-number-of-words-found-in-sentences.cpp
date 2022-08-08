class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int iCnt = 0, maxCnt = 0, i = 0, n = sentences.size(), j = 0;
        
        string str = "";
        
        for(i = 0; i < n; i++)
        {
            str = sentences[i];
            
            iCnt = 0;
            
            j = 0;
            
            while(str[j] != '\0')
            {
                if(str[j] == ' ')
                {
                    iCnt++;
                }
                j++;
            }
            
            if(iCnt+1 > maxCnt)
            {
                maxCnt = iCnt+1;
            }
        }
        
        return maxCnt;
    }
};