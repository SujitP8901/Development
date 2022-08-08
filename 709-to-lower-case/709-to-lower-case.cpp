class Solution {
public:
    string toLowerCase(string s) {
        int i = 0;
        
        for(i = 0; i < s.length(); i++)
        {
            if((s[i] >= 'A') && (s[i] <= 'Z'))
            {
                s[i] = s[i] - 'A' + 'a';
            }
        }
        
        return s;
    }
};