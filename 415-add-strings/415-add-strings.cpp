class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1, j = num2.size()-1;
        
        string ans = "";
        
        int sum = 0, value = 0, carry = 0;
        while(i >= 0 && j >= 0)
        {
            sum = (num1[i] - '0') + (num2[j] - '0') + carry;
            
            value = sum % 10;
            carry = sum / 10;
            
            ans = to_string(value) + ans;
            
            i--;
            j--;
        }
        
        while(i >= 0)
        {
            sum = (num1[i] - '0') + carry;
            
            value = sum % 10;
            carry = sum / 10;
            
            ans = to_string(value) + ans;
            
            i--;
        }
        
        while(j >= 0)
        {
            sum = (num2[j] - '0') + carry;
            
            value = sum % 10;
            carry = sum / 10;
            
            ans = to_string(value) + ans;
            
            j--;
        }
        
        if(carry != 0)
        {
            ans = to_string(carry) + ans;
        }
        
        return ans;
    }
};