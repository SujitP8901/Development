class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = 0, dist = INT_MAX;
        int i = 0;
        
        sort(nums.begin(), nums.end());
        
        for(i = 0; i < nums.size(); i++)
        {
            if(abs(nums[i]-0) <= dist)
            {
                dist = abs(nums[i]-0);
                ans = nums[i];
            }
        }
        
        return ans;
    }
};