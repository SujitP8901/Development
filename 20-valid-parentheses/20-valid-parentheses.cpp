class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        
        char ch = '\0';
        
        bool bFlag = true;
        // if(s.length() == 1)
        // {
        //     return false;
        // }
        
        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty() == false)
                {
                    ch = st.top();
                }
                else
                {
                    bFlag = false;
                    break;
                }
                
                if( ((s[i] == ')') && (ch == '(')) || ((s[i] == ']') && (ch == '[')) || ((s[i] == '}') && (ch == '{')) )
                {
                    st.pop();
                }
                else
                {
                    bFlag = false;
                    break;
                }
            }
        }
        
        if(st.empty() == false)
        {
            bFlag = false;
        }
        return bFlag;
    }
};