class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        
        for(j = 0; i < s.length() && j < t.length(); j++)
        {
            if(s[i] == t[j])
            {
                i++;
            }
        }
        
        if(i == s.length())
        {
            return true;
        }
        return false;
    }
};