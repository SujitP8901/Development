class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0, ansIndex = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(target == nums[i])
            {
                ansIndex = i;
                break;
            }
            else if(target > nums[i])
            {
                ansIndex = i+1;
            }
        }
        
        return ansIndex;
    }
};