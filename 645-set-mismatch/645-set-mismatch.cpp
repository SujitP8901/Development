class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> freq(n+1, 0);
        
        for(int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }
        
        nums.clear();
        int loss = 0, twice = 0;
        
        for(int i = 1; i < freq.size(); i++)
        {
            if(freq[i] == 2)
            {
                twice = i;
            }
            else if(freq[i] == 0)
            {
                loss = i;
            }
            
        }
        
        nums.push_back(twice);
        nums.push_back(loss);
        
        return nums;
    }
};