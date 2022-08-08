class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        
        if(n == 1)
            return 1;
        
        while(n >= 0)
        {
            if(n < i)
            {
                i--;
                break;
            }
            
            n = n - i;
            
            i++;
            
        }
        
        return i;
    }
};