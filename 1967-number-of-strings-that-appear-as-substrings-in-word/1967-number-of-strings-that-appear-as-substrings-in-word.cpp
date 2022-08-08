class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int i = 0, iCnt = 0; 
        string substr = "";
        
        for(i = 0; i < patterns.size(); i++)
        {
            substr = patterns[i];
            if(word.find(substr) != -1)
            {
                iCnt++;
            }
        }
        
        return iCnt;
    }
};