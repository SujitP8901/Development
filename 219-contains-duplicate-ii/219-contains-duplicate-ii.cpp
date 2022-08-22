class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        
        int i = 0, diff = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            auto it = m.find(nums[i]);
            if(it != m.end())
            {
                diff = i - it->second;
                
                if(diff <= k)
                {
                    break;
                }
            }
            m[nums[i]] = i; 
        }
        
        if(i == nums.size())
        {
            return false;
        }
        
        return true;
    }
};