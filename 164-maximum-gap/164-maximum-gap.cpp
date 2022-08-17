class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2)
        {
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int gap = 0, maxGap = 0;
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            gap = nums[i+1] - nums[i];
            
            if(gap > maxGap)
            {
                maxGap = gap;
            }
        }
        
        return maxGap;
    }
};