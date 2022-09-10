class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        map<int, int> m;
        
        int n = nums.size();
        int ans = -1;
        int maxValue = nums[n-1], i = 0, j = 0;
        
        for(i = 0; i <= maxValue; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(nums[j] >= i)
                {
                    m[i]++;
                }
            }
        }
        
        for(auto it : m)
        {
            if(it.first == it.second)
            {
                ans = it.first;
                break;
            }
        }
        
        return ans;
            
    }
};