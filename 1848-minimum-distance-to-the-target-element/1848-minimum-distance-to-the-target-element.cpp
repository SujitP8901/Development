class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDistance = INT_MAX, i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                if(abs(i-start) < minDistance)
                {
                    minDistance = abs(i-start);
                }
            }
        }
        
        return minDistance;
    }
};