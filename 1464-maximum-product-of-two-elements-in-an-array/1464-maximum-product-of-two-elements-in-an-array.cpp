class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int product = 1;
        int n = nums.size();
        
        product = (nums[n-1] - 1) * (nums[n-2] - 1);
        
        return product;
        
    }
};