class Solution {
private:
    bool isPalindrome(string str, int s, int e)
    {
        while(s <= e)
        {
            if(str[s] != str[e])
            {
                break;
            }
            s++;
            e--;
        }
        
        if(s > e)
        {
            return true;
        }
        return false;
    }
    
public:
    bool validPalindrome(string s) {
        int deleteChar = 1;
        int start = 0, end = s.length()-1;
        
        while(start <= end)
        {
            if(s[start] == s[end])
            {
                start++;
                end--;
            }
            else if(isPalindrome(s, start+1, end) && deleteChar != 0)
            {
                deleteChar--;
                start++;
            }
            else if(isPalindrome(s, start, end-1)  && deleteChar != 0)
            {
                deleteChar--;
                end--;
            }
            else
            {
                break;
            }
            
            if(deleteChar < 0)
            {
                break;
            }
        }
        
        if(start > end)
        {
            return true;
        }
        return false;
        
    }
};