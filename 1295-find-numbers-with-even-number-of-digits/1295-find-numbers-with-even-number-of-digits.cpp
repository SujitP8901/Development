class Solution {
private:
    int countDigits(int no)
    {
        int iCnt = 0;
        while(no != 0)
        {
            iCnt++;
            no = no / 10;
        }
        return iCnt;
    }
    
public:
    int findNumbers(vector<int>& nums) {
        int digitCount = 0, i = 0, iCnt = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            digitCount = countDigits(nums[i]);
            
            if(digitCount%2 == 0)
            {
                iCnt++;
            }
        }
        
        return iCnt;
    }
};