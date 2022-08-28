class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum = 0, sum = 0;
        
        int n = nums.size();
        
        totalSum = (n * (n+1))/2;
        
        for(int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
        }
        
        return (totalSum - sum);
    }
};