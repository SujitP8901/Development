class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size(), k = 0;
        
        vector<int> positive;
        vector<int> negative;
        
        for(i = 0; i < n; i++)
        {
            if(nums[i] < 0)
            {
                negative.push_back(nums[i]);
            }
            else
            {
                positive.push_back(nums[i]);
            }
        }
        
        i = 0;
        
        while(k < n)
        {
            if(k % 2 == 0)
            {
                nums[k] = positive[i];
                i++;
            }
            else
            {
                nums[k] = negative[j];
                j++;
            }
            
            k++;
        }
        
        
        return nums;
    }
};