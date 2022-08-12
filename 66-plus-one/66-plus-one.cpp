class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 0;
        int sum = 0;
        int value = 0;
        
        int i = 0, n = digits.size();
        
        for(i = n-1; i >= 0; i--)
        {
            if(i == n-1)
            {
                sum = digits[i] + 1;                
            }
            else
            {
                sum = digits[i] + carry;  
            }
            
            carry = sum/10;
                
            value = sum % 10;
                
            ans.push_back(value);
        }
        
        if(carry != 0)
        {
            sum = carry;
            
            ans.push_back(sum);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};