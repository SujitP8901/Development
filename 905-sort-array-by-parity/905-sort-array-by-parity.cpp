class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int evenIndex = 0, oddIndex = nums.size()-1;
        
        while(evenIndex < oddIndex)
        {
            if((nums[evenIndex] % 2 != 0) && (nums[oddIndex] % 2 == 0))
            {
                swap(nums[evenIndex], nums[oddIndex]);
                evenIndex++;
                oddIndex--;
            }
            else if(nums[evenIndex] % 2 == 0)
            {
                evenIndex++;
            }
            else if(nums[oddIndex] % 2 != 0)
            {
                oddIndex--;
            }
        }
        
        return nums;
    }
};