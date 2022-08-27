class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int i = 0, j = 0, iCnt = 0;
        int n = nums.size();
        
        for(i = 0; i < n-1; i++)
        {
            for(j = i+1; j < n; j++)
            {
                if(nums[i] == nums[j])
                {
                    if(((i*j) % k) == 0)
                    {
                        iCnt++;
                    }
                }
            }
        }
        
        return iCnt;
    }
};