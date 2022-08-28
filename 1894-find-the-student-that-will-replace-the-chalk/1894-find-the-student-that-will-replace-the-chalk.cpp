class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        int i = 0, ans = 0; 
        long long int sum = 0;
        
        for(i = 0; i < n; i++)
        {
            sum = sum + chalk[i];
        }
        
        k = k % sum;
        
        for(i = 0; i < n; i++)
        {
            if(k < chalk[i])
            {
                ans = i;
                break;
            }
            else
            {
                 k = k - chalk[i];
            }
        }
        
        return ans;
    }
};