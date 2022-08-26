class Solution {
public:
    bool isThree(int n) {
        int iCnt = 0, i = 0;
        
        for(i = 1; i <= n; i++)
        {
            if(n%i == 0)
            {
                iCnt++;
            }
        }
        
        if(iCnt == 3)
        {
            return true;
        }
        return false;
    }
};