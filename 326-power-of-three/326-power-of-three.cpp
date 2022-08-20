class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n == 0)
        {
            return 0;
        }
        
        while(n != 1)
        {
            if(n % 3 != 0)
            {
                break;
            }
            n = n/3;
        }
        
        if(n != 1)
        {
            return false;
        }
        return true;
    }
};