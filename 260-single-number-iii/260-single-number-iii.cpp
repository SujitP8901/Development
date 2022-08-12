class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m;
        
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(m.find(nums[i]) == m.end())
            {
                m[nums[i]] = 1;
            }
            else
            {
                m[nums[i]]++;
            }
        }
        
        for(auto it : m)
        {
            if(it.second == 1)
            {
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};