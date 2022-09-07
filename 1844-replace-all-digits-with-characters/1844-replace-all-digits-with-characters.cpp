class Solution {
public:
    string replaceDigits(string s) {
        int i = 0;
        char prevChar = '\0';
        
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                prevChar = s[i];
            }
            else 
            {
                s[i] = prevChar + (s[i] - '0');
            }
        }
        
        return s;
    }
};