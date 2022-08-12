class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> freq(26,0);
        char ans = '\0';
        
        for(int i = 0; i < s.length(); i++)
        {
            if(freq[s[i]-'a'] > 0)
            {
                ans = s[i];
                break;
            }
            
            freq[s[i]-'a']++;
        }
        return ans;
    }
};