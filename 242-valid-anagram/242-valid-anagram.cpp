class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        
        vector<int> count1(26, 0);
        vector<int> count2 = count1;
        int index = 0, i = 0;
        
        for(i = 0; i < s.length(); i++)
        {
            index = s[i] - 'a';
            count1[index]++;
            
            index = t[i] - 'a';
            count2[index]++;
        }
        
        for(i = 0; i < count1.size(); i++)
        {
            if(count1[i] != count2[i])
            {
                break;
            }
        }
        
        if(i == count1.size())
        {
            return true;
        }
        return false;
    }
};