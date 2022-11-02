class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 0, n = nums.size();
        
        while(i < n-1)
        {
            if(nums[i] == nums[i+1])
            {
                i++;
            }
            else if(nums[i] < nums[i+1])
            {
                while(i < n-1)
                {
                    if(nums[i] > nums[i+1])
                    {
                        break;
                    }
                    i++;
                }
                break;
            }
            else if(nums[i] > nums[i+1])
            {
                while(i < n-1)
                {
                    if(nums[i] < nums[i+1])
                    {
                        break;
                    }
                    i++;
                }
                break;
            }
        }
        
        if(i == n-1)
        {
            return true;
        }
        return false;
    }
};