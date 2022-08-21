class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res(s.size() + spaces.size(),' ');
        
        int curSpaceIndex = 0;
        int resItr = 0;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (curSpaceIndex < spaces.size())
            {
                if (i == spaces[curSpaceIndex])
                {
                    resItr++;
                    curSpaceIndex++;
                }
            }
            
            res[resItr] = s[i];
            resItr++;
        }
        
        return res;
    }
};