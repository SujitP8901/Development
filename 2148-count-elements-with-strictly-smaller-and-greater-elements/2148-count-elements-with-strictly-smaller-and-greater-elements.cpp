class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        
        int iCnt = 0, i = 0, n = nums.size();
        
        for(i = 1; i < n-1; i++)
        {
            if((nums[i] > min) && (nums[i] < max))
            {
                iCnt++;
            }
        }
        
        return iCnt;
    }
};