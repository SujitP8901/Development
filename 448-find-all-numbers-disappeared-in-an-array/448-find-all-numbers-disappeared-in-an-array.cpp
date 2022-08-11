class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        
        vector<int> ans;
        int n = nums.size(), i = 0;
        
        vector<int> freq(n+1, 0);        
        
        for(i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }
        
        for(i = 1; i < n+1; i++)
        {
            if(freq[i] == 0)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};