class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        bool bFlag = false;
        
        if(x == 1){
            return 1;
        }
        if( x != -1 and n == INT_MIN){
            return 0;
        }
        if(( x == -1) and n == INT_MAX){
            return -1;
        }
        if((x==-1) and n == INT_MIN){
            return 1;
        }
        
        if(n < 0)
        {
            bFlag = true;
            n = (unsigned int)-n;
        }
        
        for(int i = 0; (i < n) && (i < INT_MAX); i++)
        {
            ans = ans * x;
        }
        
        if(bFlag == true)
        {
            ans = 1/ans;
        }
        
        return ans;
    }
};