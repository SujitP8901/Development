class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = 0, sum = 0, value = 0, carry = 0, n = num.size();
        vector<int> ans;
        
        i = n - 1;
        
        while(i >= 0 && k != 0)
        {
            sum = num[i] + (k % 10) + carry;
            
            value = sum % 10;
            carry = sum / 10;
            
            ans.push_back(value);
            
            k = k/10;
            i--;
        }
        
        while(i >= 0)
        {
            sum = num[i] + carry;
            
            value = sum % 10;
            carry = sum / 10;
            
            ans.push_back(value);
            i--;
        }
        
        while(k != 0)
        {
            sum = (k % 10) + carry;
            
            value = sum % 10;
            carry = sum / 10;
            
            ans.push_back(value);
            k = k / 10;
        }
        
        if(carry > 0)
        {
            ans.push_back(carry);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};