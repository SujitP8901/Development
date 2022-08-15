class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        
        int i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] == original)
            {
                original = original * 2;
            }
        }
        
        return original;
    }
};