class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp = x;
        
        int reverse = 0;
        
        if(x < 0)
        {
            return false;
        }
        
        while(temp != 0)
        {
            if(reverse < INT_MAX/10)
            {
                reverse = (reverse*10) + (temp%10);
            }
            temp = temp/10;
        }
        
        if(reverse == x)
        {
            return true;
        }
        return false;
    }
};