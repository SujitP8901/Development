class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ch(26,0);
        
        int i = 0;
        
        for(i = 0; i < sentence.length(); i++)
        {
            ch[sentence[i]-'a']++;
        }
        
        for(i = 0; i < ch.size(); i++)
        {
            if(ch[i] == 0)
            {
                break;
            }
        }
        
        if(i == ch.size())
        {
            return true;
        }
        return false;
    }
};