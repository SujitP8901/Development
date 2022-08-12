class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        
        int ans = 0, i = 0;
        
        m[nums[0]] = 1;
        for(i = 1; i < nums.size(); i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                ans = nums[i];
                break;
            }
            else
            {
                m[nums[i]] = 1;
            }
        }
        
        if(i == nums.size())
        {
            return false;
        }
        return true;
        
    }
};