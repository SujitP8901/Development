class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0, ans = 0, iCnt = 0;
        
        for(i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                iCnt++;
                ans = nums[i+1];
                break;
            }
        }
        
        if(iCnt == 0 && i == nums.size()-1)
        {
            ans = nums[0];
        }
        return ans;
    }
};