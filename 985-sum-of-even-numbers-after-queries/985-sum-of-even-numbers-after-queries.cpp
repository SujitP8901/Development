class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sumEven = 0;
        int i = 0, j = 0;
        int index = 0;
        vector<int> ans;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0)
            {
                sumEven = sumEven + nums[i];
            }
        }
        
        for(j = 0; j < queries.size(); j++)
        {
            index = queries[j][1];
            if((nums[index]%2) == 0)
            {
                sumEven = sumEven - nums[index];
            }
            
            nums[index] = nums[index] + queries[j][0];
            
            if((nums[index] % 2) == 0)
            {
                sumEven = sumEven + nums[index];
            }
            
            ans.push_back(sumEven);
        }
                
        return ans; 
    }
};