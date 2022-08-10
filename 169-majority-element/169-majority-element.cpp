class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size(), majority = n/2, count = 0, temp = 0, ans = 0;
        // return nums[n/2];
        
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                count++;
                temp = nums[i];
            }
            else
            {
                if(count >= majority)
                {
                    ans = temp;
                }
                count = 0;
            }
        }
        
        if(count >= majority)
        {
            ans = temp;
        }
        
        return ans;
    }
};