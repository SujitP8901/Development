class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        int iMask = 0;
        
        while(temp != 0)
        {
            iMask = (iMask << 1) | 1;
            
            temp = temp >> 1;
        }
        
        return (num ^ iMask);
        
    }
};