class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string element = "";
        string temp = "";
        
        for(int i = 0; i < s.length(); i++)
        {
            element = element + s[i];
            
            if(element.size() == k)
            {
                ans.push_back(element);
                element = "";
            }
        }
        
        if(element.size() != 0)
        {
            for(int i = element.size(); i < k; i++)
            {
                temp = temp + fill;
            }
            element = element + temp;
            ans.push_back(element);
        }
        
        return ans;        
    }
};