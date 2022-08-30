class Solution {
public:
    vector<int> sumZero(int n) {
        int i = 0, no = n;
        vector<int> ans;
        
        while(i < n/2)
        {
            ans.push_back(no);
            ans.push_back(-no);
            i++;
            no--;
        }
        
        if(n % 2 != 0)
        {
            ans.push_back(0);
        }
        
        return ans;
    }
};