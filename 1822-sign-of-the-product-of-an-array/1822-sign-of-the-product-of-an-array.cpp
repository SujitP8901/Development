class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int mul = 1;
        
        for(auto value : nums)
        {
            mul = (mul * value) % 1000000007;
        }
        
        if(mul < 0)
        {
            return -1;
        }
        else if(mul > 0)
        {
            return 1;
        }
        return 0;
            
    }
};