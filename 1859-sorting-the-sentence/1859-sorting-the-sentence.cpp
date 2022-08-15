class Solution {
public:
    string sortSentence(string s) {
        int i = 0;
        string ans = "";
        string word = "";
        
        vector< pair<int, string> > p;
        
        int no = 0, length = 0;
        
        for(i = 0; i < s.length(); i++)
        {
            if((s[i] >= '0') && (s[i] <= '9'))
            {                
                no = s[i] - '0';
                
                p.push_back(make_pair(no, string(word)));
                
                word = "";
                no = 0;
            }
            else if(s[i] == ' ')
            {
                continue;   
            }                
            else
            {
                word = word + s[i];
            }
        }
        
        sort(p.begin(), p.end());
        
        for(int i = 0; i < p.size(); i++)
        {
            if(i != p.size()-1)
            {
                ans = ans + p[i].second + " ";
            }
            else
            {
                ans = ans + p[i].second; 
            }
        }
        return ans;
    }
};