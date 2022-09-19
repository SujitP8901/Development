class Solution {
private:
    int wordCount(string str)
    {
        int iCnt = 0;
        int i = 0;
        string word = "";
        
        for(i = 0; i < str.length(); i++)
        {
            if(str[i] != ' ')
            {
                word = word + str[i];
            }
            else
            {
                word = "";
                iCnt++;
            }
        } 
        
        if(word != "")
        {
            iCnt++;
        }
        return iCnt;
    }
    
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string, int> m;
        
        int i = 0, length = 0, maxCnt = 0;
        
        string ans = "";
        
        for(i = 0; i < senders.size(); i++)
        {
            auto it = m.find(senders[i]);
            
            length = wordCount(messages[i]);
            
            if(it == m.end())
            {
                m[senders[i]] = length;
            }
            else
            {
                m[senders[i]] = m[senders[i]] + length;
            }
        }
        
        for(auto it : m)
        {
            if(it.second >= maxCnt)
            {
                maxCnt = it.second;
                ans = it.first;
            }
        }
        
        return ans;
    }
};