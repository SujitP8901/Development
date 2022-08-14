class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> m;
        int i = 0;
        char ch = 'a';
        string ans = "";
        
        for(i = 0; i < key.length(); i++)
        {
            if(key[i] != ' ')
            {
                if(m.find(key[i]) == m.end())
                {
                    m.insert(pair<char, char>(key[i], ch));
                
                    ch++;
                }
            }
            
        }
        for(i = 0; i < message.length(); i++)
        {
            if(message[i] != ' ')
            {
                auto it = m.find(message[i]);
                ch = it->second;
                ans.push_back(ch);
            }
            else
            {
                ans.push_back(' ');
            }
        }
        
        return ans;
    }
};