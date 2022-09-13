class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> oneLocation;
        int i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                oneLocation.push_back(i);
            }
        }
        
        if(oneLocation.size() == 0)
        {
            return true;
        }
        
        for(i = 0; i < oneLocation.size()-1; i++)
        {
            if((oneLocation[i+1] - oneLocation[i]) <= k)
            {
                break;
            }
        }
        
        if(i == oneLocation.size()-1)
        {
            return true;
        }
        return false;
    }
};