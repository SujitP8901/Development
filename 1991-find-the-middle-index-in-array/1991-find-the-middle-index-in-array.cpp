class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0, ans = -1;
        
        for(int i = 0; i < nums.size(); i++)
        {
            sum = sum - nums[i];
            
            if(leftSum == sum)
            {
                ans = i;
                break;
            }
            
            leftSum = leftSum + nums[i];
            // sum = sum - nums[i];
        }
        return ans;
    }
};