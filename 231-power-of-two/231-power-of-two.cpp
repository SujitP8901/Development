class Solution {
public:
    bool isPowerOfTwo(int n) {
        // return (n != 0 && (n & (n-1) == 0));
        
        if(n == 0)
        {
            return 0;
        }
        
        while(n != 1)
        {
            if(n % 2 != 0)
            {
                break;
            }
            n = n/2;
        }
        
        if(n != 1)
        {
            return false;
        }
        return true;
    }
};