class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 1)
        {
            return 1;
        }
        
        int actualIndex = 0, i = 0;
        
        for(i = 1; i < nums.size(); i++)
        {
            if(nums[actualIndex] != nums[i])
            {
                actualIndex++;
                nums[actualIndex] = nums[i];
            }
        }
        
        return (actualIndex+1);
    }
};