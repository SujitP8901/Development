class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroCnt = 0, i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[nonZeroCnt], nums[i]);
                nonZeroCnt++;
            }
        }
    }
};