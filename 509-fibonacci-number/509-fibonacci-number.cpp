class Solution 
{
public:
    int fib(int n) 
    {
               
        int t1 = 0, t2 = 1, nextTerm = 0, temp = 0;
        
        if(n == 0 || n == 1)
        {
            return n;
        }
        
        for(int i = 2; i <= n; i++)
        {
            nextTerm = t1 + t2;
            
            t1 = t2;
            t2 = nextTerm;
        }
        
        return nextTerm;
    }
};