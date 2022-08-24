class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j = b.length()-1;
        int sum = 0, carry = 0, value = 0;
        char ch = '\0';
        string ans = "";
        
        while(i >= 0 && j >= 0)
        {
            sum = (a[i] - '0') + (b[j] - '0') + carry;
            
            value = sum % 2;
            carry = sum / 2;
            
            ch = value + '0';
            
            ans = ans + ch;
            
            i--;
            j--;
        }
        
        while(i >= 0)
        {
            sum = (a[i] - '0') + carry;
            
            value = sum % 2;
            carry = sum / 2;
            
            ch = value + '0';
            
            ans = ans + ch;
            
            i--;
        }
        
        while(j >= 0)
        {
            sum = (b[j] - '0') + carry;
            
            value = sum % 2;
            carry = sum / 2;
            
            ch = value + '0';
            
            ans = ans + ch;
            
            j--;
        }
        
        if(carry != 0)
        {
            ch = carry + '0';
            
            ans = ans + ch;
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};