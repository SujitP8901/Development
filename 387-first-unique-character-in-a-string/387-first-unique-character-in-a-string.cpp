class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;
        
        int j = 0;
        int i = 0, ans = -1;
        
        for(i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        
        for(j = 0; j < s.length(); j++)
        {
            if((m.find(s[j]))->second == 1)
            {
                ans = j;
                break;
            }
        }
        
        return ans;
        
    }
};