class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        int i = 0;
        bool bFlag = true;
        
        for(i = 0; i < ransomNote.length(); i++)
        {
            m[ransomNote[i]]++;
        }
        
        for(i = 0; i < magazine.length(); i++)
        {
            if(m.find(magazine[i]) != m.end())
            {
                if(m[magazine[i]] > 0)
                {
                    m[magazine[i]]--;
                }
            }
        }
        
        for(auto it : m)
        {
            if(it.second != 0)
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }
};