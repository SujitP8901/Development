class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int iCnt = 1, maxCnt = 0;
        
        if(nums.size() == 1)
        {
            return 1;
        }
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] < nums[i+1])
            {
                iCnt++;
            }
            else
            {
                iCnt = 1;
            }
            
            if(iCnt > maxCnt)
            {
                maxCnt = iCnt;
            }
        }
        
        return maxCnt;
    }
};