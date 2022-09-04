class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        vector<int> ans(n);
        
        int i = 0, j = n-1;
        
        for(i = 1; i < nums.size(); i = i + 2)
        {
            ans[i] = nums[j];
            j--;
        }
        
        for(i = 0; i < nums.size(); i = i+2)
        {
            ans[i] = nums[j];
            j--;
        }
        
        nums = ans;
    }
};