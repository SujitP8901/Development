class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int i = 0;
        vector<int> ans;
        
        for(i = 0; i < nums.size(); i++)
        {
            auto it = ans.begin() + index[i];
            ans.insert(it, nums[i]);
        }
        
        return ans;
    }
};