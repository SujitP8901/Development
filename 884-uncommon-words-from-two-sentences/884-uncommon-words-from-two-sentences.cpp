class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int>mp;
        int i = 0;
        string temp = "";
        vector<string> ans;
        
        for(i = 0; i < s1.length(); i++)
        {
            if(s1[i] != ' ')
            {
                temp = temp + s1[i];
            }
            else
            {
                if(mp.find(temp) == mp.end())
                {
                    mp[temp]++;
                }
                else
                {
                    mp[temp]--;
                }
                temp = "";
            }
        }
        
        if(mp.find(temp) == mp.end())
        {
            mp[temp]++;
        }
        else
        {
            mp[temp]--;
        }
        
        temp = "";
        
        for(i = 0; i < s2.length(); i++)
        {
            if(s2[i] != ' ')
            {
                temp = temp + s2[i];
            }
            else
            {
                if(mp.find(temp) != mp.end())
                {
                    mp[temp]--;
                }
                else
                {
                    mp[temp]++;
                }
                temp = "";
            }
        }
        
        if(mp.find(temp) != mp.end())
        {
            mp[temp]--;
        }
        else
        {
            mp[temp]++;
        }
        
        for(auto it : mp)
        {
            if(it.second == 1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};