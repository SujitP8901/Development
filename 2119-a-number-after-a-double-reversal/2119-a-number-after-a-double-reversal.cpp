class Solution {
private:
    int reverse(int value)
    {
        int ans = 0;
        while(value != 0)
        {
            ans = ans*10 + (value%10);
            value = value/10;
        }
        
        return ans;
    }
    
public:
    bool isSameAfterReversals(int num) {
        
        int revNo = reverse(num);
        
        if(num == reverse(revNo))
        {
            return true;
        }
        return false;        
    }
};