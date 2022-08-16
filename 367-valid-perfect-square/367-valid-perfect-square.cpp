class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start = 0, end = num, mid = 0;
        bool bFlag = false;
        long long int square = 0;
        
        while(start <= end)
        {
            mid = (start + end) / 2;
            
            square = mid * mid;
            
            if(square == num)
            {
                bFlag = true;
                break;
            }
            else if(square > num)
            {
                end = mid - 1;
            }
            else if(square < num)
            {
                start = mid + 1;
            }
        }
        
        return bFlag;        
    }
};