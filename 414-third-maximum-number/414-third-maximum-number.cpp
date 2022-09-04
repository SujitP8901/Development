class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        vector<int> arr;
        int i = 0;
        
        for(i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);    
        }
        
        for(auto it : s)
        {
            arr.push_back(it);
        }
        
        int n = arr.size();
        
        if(n < 3)
        {
            return arr[n-1];
        }
        return arr[n-3];
    }
};