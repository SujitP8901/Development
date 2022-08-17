class Solution {
public:
    string greatestLetter(string s) {
        vector<int> cap(26, 0);
        vector<int> small(26, 0);
        string ans = "";
        
        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] >= 'A') && (s[i] <= 'Z'))
            {
                cap[s[i] - 'A']++;
            }
            else if((s[i] >= 'a') && (s[i] <= 'z'))
            {
                small[s[i] - 'a']++;
            }
        }
        
        char ch = '\0';
        
        for(int i = cap.size()-1; i >= 0; i--)
        {
            if((cap[i] > 0) && (small[i] > 0))
            {
                ch = 'A' + i;
                ans = ch;
                break;
            }
        }
        
        return ans;
    }
};