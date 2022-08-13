class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch1 = '\0';
        
        for(int i = 0; i < s.size(); i++)
        {
            ch1 = ch1 ^ s[i];
        }
        
        char ch2 = '\0';
        
        for(int i = 0; i < t.size(); i++)
        {
            ch2 = ch2 ^ t[i];
        }
        
        return (ch2 ^ ch1);
    }
};