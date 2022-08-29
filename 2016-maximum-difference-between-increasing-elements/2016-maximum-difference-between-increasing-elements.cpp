class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = nums[0], i = 0, n = nums.size(), maxDiff = 0;
        
        for(i = 1; i < n; i++)
        {
            if(nums[i] < min)
            {
                min = nums[i];
            }
            
            if((nums[i] - min) > maxDiff)
            {
                maxDiff = nums[i]- min;
            }
        }
        
        if(maxDiff == 0)
        {
            return -1;
        }
        return maxDiff;
    }
};