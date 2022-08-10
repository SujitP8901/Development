class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0, leftSum = 0, i = 0, ans = -1;
        
        for(i = 0; i < nums.size(); i++)
        {
            totalSum = totalSum + nums[i];
        }
        
        for(i = 0; i < nums.size(); i++)
        {
            totalSum = totalSum - nums[i];
            
            if(leftSum == totalSum)
            {
                ans = i;
                break;
            }
            
            leftSum = leftSum + nums[i];
        }
        
        return ans;
    }
};