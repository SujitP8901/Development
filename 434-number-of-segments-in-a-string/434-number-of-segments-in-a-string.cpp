class Solution {
public:
    int countSegments(string s) {
        int i = 0, iCnt = 0;
        string str = "";
        
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')
            {
                str = str + s[i]; 
            }
            else
            {
                if(str != "")
                {
                    iCnt++;
                }
                str = "";
            }
        }
        
        if(str != "")
        {
            iCnt++;
        }
        
        return iCnt;
    }
};