class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        int ans = 0;
        
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
                ans = it.first;
                break;
            }
        }
        
        return ans;
    }
};