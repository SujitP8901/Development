class Solution {
private:
    void findElementToDelete(vector<int>& nums, int &min)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0 && nums[i] < min)
            {
                min = nums[i];
            }
        } 
    }
    
    void deleteMinElement(vector<int>& nums, int& min)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[i] = nums[i] - min;
            }
        }
    }
    
    bool zeroArray(vector<int>& nums)
    {
        bool bFlag = true;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }
    
public:
    int minimumOperations(vector<int>& nums) {
        
        if(zeroArray(nums) == true)
        {
            return 0;
        }
        
        int iCnt = 1;
        int max = 0;
        int i = 0;
        int min = 101;
        
        int n = nums.size();
        
        for(i = 0; i < nums.size(); i++)
        {
            min = 101;
            findElementToDelete(nums, min);
            deleteMinElement(nums, min);
            
            if(zeroArray(nums) == false)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
};