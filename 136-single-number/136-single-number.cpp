class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0, i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }
        
        return ans;
    }
};