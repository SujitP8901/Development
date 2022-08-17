class Solution {
public:
    int hammingWeight(uint32_t n) {
        int iCnt = 0;
        
        while(n != 0)
        {
            if((n & 1) == 1)
            {
                iCnt++;
            }
            n = n >> 1;
        }
        
        return iCnt;
    }
};