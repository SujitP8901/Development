class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count = 0, i = 0, n = nums.size(), majority = n/3, temp = 0;
        
        vector<int> ans;
        
        sort(nums.begin(), nums.end());
        
        if(n == 1)
        {
            ans.push_back(nums[0]);
            return ans;
        }
        
        if(n == 2)
        {
            // ans.push_back(nums[0]);
            if(nums[0] == nums[1])
            {
                ans.push_back(nums[0]);
            }
            else
            {
                ans.push_back(nums[0]);
                ans.push_back(nums[1]);
            }
            return ans;
        }
        
        for(i = 0; i < nums.size()-1; i++)
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
                    // majority = count;
                    ans.push_back(temp);
                }
                count = 0;                
            }
        }
        
        if(count >= majority)
        {
            // majority = count;
            ans.push_back(temp);
        }
        
        return ans;
    }
};