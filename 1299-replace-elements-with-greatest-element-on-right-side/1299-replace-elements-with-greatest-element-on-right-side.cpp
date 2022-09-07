class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i = 0, n = arr.size(), j = 0;
        int maxValue = 0;
        
        for(i = 0; i < n-1; i++)
        {
            maxValue = arr[i+1];
            for(j = i+1; j < n; j++)
            {
                if(arr[j] > maxValue)
                {
                    maxValue = arr[j];
                }
            }
            
            arr[i] = maxValue;
        }
        
        if(i == n-1)
        {
            arr[i] = -1;
        }
        
        return arr;
    }
};