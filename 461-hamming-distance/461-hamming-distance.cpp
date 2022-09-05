class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x ^ y;
        long int iCnt = 0;
        
        while(temp != 0)
        {
            if(temp & 1 == 1)
            {
                iCnt++;
            }
            temp = temp >> 1;
        }
        
        return iCnt;
    }
};