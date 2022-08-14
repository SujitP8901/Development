class Solution {
public:
    int xorOperation(int n, int start) {
        int i = 0, ans = 0;
        
        for(i = 0; i < n; i++)
        {
            ans = ans ^ (start + 2 * i);
        }
        
        return ans;
    }
};