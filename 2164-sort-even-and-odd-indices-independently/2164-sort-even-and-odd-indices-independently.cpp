class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> oddArray;
        vector<int> evenArray;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(i % 2 == 0)
            {
                evenArray.push_back(nums[i]);
            }
            else
            {
                oddArray.push_back(nums[i]);
            }
        }
        
        sort(evenArray.begin(), evenArray.end());
        sort(oddArray.begin(), oddArray.end(), greater<int>());
        
        int i = 0, j = 0, k = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            if(i % 2 == 0)
            {
                ans.push_back(evenArray[j]);
                j++;
            }
            else
            {
                ans.push_back(oddArray[k]);
                k++;
            }
        }
        
        return ans;
    }
};