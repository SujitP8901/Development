class Solution {
public:
    bool detectCapitalUse(string word) {
        int i = 0, iCnt = 0;
        bool bFirstLet = false;
        
        for(i = 0; i < word.length(); i++)
        {
            if(i == 0)
            {
                if((word[i] >= 'A') && (word[i] <= 'Z'))
                {
                    bFirstLet = true;
                    iCnt++;
                }
            }
            else
            {
                if((word[i] >= 'A') && (word[i] <= 'Z'))
                {
                    iCnt++;
                }
            }
        }
        
        return ((iCnt == word.length()) || (iCnt == 0) || ((bFirstLet == true) && (iCnt == 1)));
        
    }
};