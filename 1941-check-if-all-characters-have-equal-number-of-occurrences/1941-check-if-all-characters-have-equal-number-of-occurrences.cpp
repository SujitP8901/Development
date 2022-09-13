class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> m;
        bool bFlag = true;
        
        for(int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        
        int value = 0, iCnt = 1;
        for(auto it : m)
        {
            if(iCnt == 1)
            {
                value = it.second;
                iCnt--;
            }
            else 
            {
                if(value != it.second)
                {
                    bFlag = false;
                    break;
                }
            }
        }
        
        return bFlag;
    }
};