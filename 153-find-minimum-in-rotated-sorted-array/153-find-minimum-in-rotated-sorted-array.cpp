class Solution {
private:
    bool isSorted(vector<int>& nums)
    {
        bool bFlag = true;
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                bFlag = false;
                break;
            }
        }
        
        return bFlag;
    }
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1, mid = 0;
        bool bFlag = isSorted(nums);
        
        if(bFlag == true)
        {
            return nums[0];
        }
        else
        {
            while(start < end)
            {
                mid = (start+end)/2;
                
                if(nums[mid] >= nums[0])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid;
                }
            }
        }
        
        return nums[start];
    }
};