class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        int ans = -1, ansFreq = 0;
        int i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0)
            {
                m[nums[i]]++;
            }
        }
        
        for(auto it : m)
        {
            if(it.second > ansFreq)
            {
                ans = it.first;
                ansFreq = it.second;
            }
        }
        
        return ans;
    }
};