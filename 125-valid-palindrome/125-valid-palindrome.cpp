class Solution {
public:
    bool isPalindrome(string s) 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        int start = 0, end = s.length() - 1;
        
        while(start <= end)
        {
            if( ( ((s[start] >= 'a') && (s[start] <= 'z')) || ((s[start] >= '0') && (s[start] <= '9')) ) && ((s[end] >= 'a') && (s[end] <= 'z')) || ((s[end] >= '0') && (s[end] <= '9')) )  
            {
                if(s[start] != s[end])
                {
                    break;
                }
                start++;
                end--;
                
            }
            else if( !(((s[start] >= 'a') && (s[start] <= 'z')) || ((s[start] >= '0') && (s[start] <= '9'))))
            {
                start++;
            }
            else if( !(((s[end] >= 'a') && (s[end] <= 'z')) || ((s[end] >= '0') && (s[end] <= '9'))))
            {
                end--;
            } 
        }
        
        if(start > end)
        {
            return true;
        }
        return false;
        
    }
};