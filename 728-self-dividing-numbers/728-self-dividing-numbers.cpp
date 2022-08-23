class Solution {
private :
    bool isSelfDividing(int no)
    {
        int iDigit = 0;
        int temp = no;
        
        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit == 0)
            {
                break;
            }
            
            if((no % iDigit) != 0)
            {
                break;
            }
            
            temp = temp/10;
        }
        
        if(temp != 0)
        {
            return false;
        }
        return true;
    }
    
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int i = 0;
        vector<int> ans;
        
        for(i = left; i <= right; i++)
        {
            if(isSelfDividing(i) == true)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};