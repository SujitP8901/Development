class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        signed int ans = 0;
        int i = 0;
        
        for(i = 0; i < operations.size(); i++)
        {
            if(operations[i] == "--X" || operations[i] == "X--")
            {
                ans = ans - 1;             
            }
            else if(operations[i] == "++X" || operations[i] == "X++")
            {
                ans++;
            }
        }
        
        return ans;
    }
};