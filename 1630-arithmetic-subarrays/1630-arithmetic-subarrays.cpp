class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int i = 0, firstDiff = arr[1]-arr[0], diff = 0;
        
        for(i = 2; i < arr.size(); i++)
        {
            diff = arr[i] - arr[i-1];
            
            if(diff != firstDiff)
            {
                break;
            }
        }
        
        if(i == arr.size())
        {
            return true;
        }
        return false;
            
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<int> sample;
        vector<bool> ans;
        int i = 0, j = 0;
        
        for(i = 0; i < l.size(); i++)
        {
            for(j = l[i]; j <= r[i]; j++)
            {
                sample.push_back(nums[j]);
            }
            
            if(canMakeArithmeticProgression(sample) == true)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
            
            sample.clear();
        }
        
        return ans;
    }
};