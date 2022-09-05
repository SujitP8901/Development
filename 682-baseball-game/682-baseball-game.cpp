class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> ans;
        int i = 0, n = 0, sum = 0;
        
        for(i = 0; i < ops.size(); i++)
        {
            if(ops[i] == "C")
            {
                ans.pop_back();
            }
            else if(ops[i] == "D")
            {
                n = ans.size();
                ans.push_back(ans[n-1]*2);
            }
            else if(ops[i] == "+")
            {
                n = ans.size();
                
                ans.push_back(ans[n-1] + ans[n-2]);
            }
            else
            {
                int val = stoi(ops[i]);
                ans.push_back(val);
            }
        }
        
        for(i = 0; i < ans.size(); i++)
        {
            sum = sum + ans[i];
        }
        return sum;
    }
};