class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxElementIndex = max_element(nums.begin(), nums.end()) - nums.begin();
        int maxEle = *max_element(nums.begin(), nums.end());
        int i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if((maxEle < (2*nums[i])) && (maxEle != nums[i]))
            {
                break;
            }
        }
        
        if(i == nums.size())
        {
            return maxElementIndex;
        }
        return -1;
    }
};