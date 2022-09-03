class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        vector<int> ans;
        int i=0;
        
        for(i = 0; i < arr.size(); i++)
        {
            ans.push_back(arr[i]);
            if(arr[i] == 0)
            {
                ans.push_back(arr[i]);
            }
        }
        
        for(i = 0; i < arr.size(); i++)
        {
            arr[i] = ans[i];
        }        
    }
};