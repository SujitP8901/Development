class Solution 
{
public:
    int firstPos(vector<int> nums, int target)
    {
        int ansIndex = -1;
        int start = 0, end = nums.size()-1, mid = 0;
        
        while(start <= end)
        {
            mid = (start + end)/2;
            
            if(nums[mid] == target)
            {
                ansIndex = mid;
                end = mid-1;
            }
            else if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }    
        }
        
        return ansIndex;
    }
    
    int lastPos(vector<int> nums, int target)
    {
        int ansIndex = -1;
        int start = 0, end = nums.size()-1, mid = 0;
        
        while(start <= end)
        {
            mid = (start+end)/2;

            if(nums[mid] == target)
            {
                ansIndex = mid;
                start = mid+1;
            }
            else if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
        }
        return ansIndex;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> ans;
        int firstOcc = firstPos(nums, target);
        int lastOcc = lastPos(nums, target);
        
        ans.push_back(firstOcc);
        ans.push_back(lastOcc);
        
        return ans;
    }
};