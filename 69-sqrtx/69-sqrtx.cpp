class Solution {
public:
    int mySqrt(int x) {
        long long int start = 0, end = x, mid = 0, ans = 0;
        long long int square = 0;
        
        while(start <= end)
        {
            mid = (start+end)/2;
            
            square = mid*mid;
            
            if(square == x)
            {
                ans = mid;
                break;
            }
            else if(square > x)
            {
                end = mid-1;
            }
            else if(square < x)
            {
                ans = mid;
                start = mid+1;
            }
        }
        
        return ans;
    }
};