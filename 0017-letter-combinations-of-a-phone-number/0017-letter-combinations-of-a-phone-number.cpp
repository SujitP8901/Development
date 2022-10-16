class Solution 
{
private:
    void solve(string digits, int index, string output, vector<string>& ans, string mapping[])
    {
        if(index >= digits.length())
        {
            ans.push_back(output);
            return;
        }
        
        int digit = digits[index] - '0';
        string str = mapping[digit];
        
        for(int i = 0; i < str.length(); i++)
        {
            output.push_back(str[i]);
            solve(digits, index+1, output, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) 
    {
        
        vector<string> ans;
        
        if(digits.length() == 0)
        {
            return ans;
        }
        
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output = "";
        
        solve(digits, index, output, ans, mapping);
        
        return ans;
    }
};