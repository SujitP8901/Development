class Solution {
public:
    bool isPalindrome(string str)
    {
        int start = 0, end = str.length()-1;
        
        while(start <= end)
        {
            if(str[start] != str[end])
            {
                break;
            }
            start++;
            end--;
        }
        
        if(start > end)
        {
            return true;
        }
        return false;
    }
        
    string firstPalindrome(vector<string>& words) {
        int i = 0;
        string ans = "";
        
        for(i = 0; i < words.size(); i++)
        {
            if(isPalindrome(words[i]) == true)
            {
                ans = words[i];
                break;
            }
        }
        
        return ans;
    }
};