class Solution {
public:
    int bitwiseComplement(int n) {
        int iMask = 0, temp = n;
        
        if(n == 0)
        {
            return 1;
        }
        
        while(temp != 0)
        {
            iMask = (iMask << 1) | 1;
            
            temp = temp >> 1;
        }
        
        return n ^ iMask;
    }
};