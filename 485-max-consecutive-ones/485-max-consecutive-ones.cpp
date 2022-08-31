class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int oneCnt = 0, maxOneCnt = 0, i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                oneCnt++;
            }
            else
            {
                if(oneCnt > maxOneCnt)
                {
                    maxOneCnt = oneCnt;
                }
                
                oneCnt = 0;
            }
        }
        
        if(oneCnt > maxOneCnt)
        {
            maxOneCnt = oneCnt;
        }
        return maxOneCnt;
    }
};