class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        
        int i = 0, j = 0;
        
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] == '#' && st1.empty() == false)
            {
                st1.pop();
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                st1.push(s[i]);
            }
        }
        
        for(j = 0; j < t.length(); j++)
        {
            if(t[j] == '#' && st2.empty() == false)
            {
                st2.pop();
            }
            else if(t[j] >= 'a' && t[j] <= 'z')
            {
                st2.push(t[j]);
            }
        }
        
        while(st1.empty() == false && st2.empty() == false)
        {
            if(st1.top() != st2.top())
            {
                break;
            }
            
            st1.pop();
            st2.pop();
        }
        
        if(st1.empty() && st2.empty())
        {
            return true;
        }
        return false;
    }
};