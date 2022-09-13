class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i = 0, j = 0, iCnt = 0;
        
        int n = nums.size();
        
        for(i = 0; i < n-1; i++)
        {
            for(j = i+1; j < n; j++)
            {
                if(nums[i] == nums[j])
                {
                    iCnt++;
                }
            }
        }
        
        return iCnt;
    }
};