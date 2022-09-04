class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mp1,mp2;
        int iCnt = 0;
        
        for(int i = 0; i < words1.size(); i++)
        {
            mp1[words1[i]]++;
        }
        
        for(int i = 0; i < words2.size(); i++)
        {
            mp2[words2[i]]++;
        }
        
        for(auto w : words1)
        {
            if(mp1[w] == 1 && mp2[w] == 1)
            {
                iCnt++;
            }
        }
        
        return iCnt;
    }
};