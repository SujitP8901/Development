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
};