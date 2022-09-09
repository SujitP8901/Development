class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int> m;
        
        int ans = 0;
        int n = nums.size();
        int target = n/2;
        int i = 0;
        
        for(i = 0; i < n; i++)
        {
            m[nums[i]]++;    
        }
        
        for(auto it : m)
        {
            if(it.second == target)
            {
                ans = it.first;
                break;
            }
        }
        
        return ans;
    }
};