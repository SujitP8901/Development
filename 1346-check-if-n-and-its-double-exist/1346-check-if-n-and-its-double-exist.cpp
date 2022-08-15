class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i = 0, j = 0;
        bool bFlag = false;
        // sort(arr.begin(), arr.end());
        
        for(i = 0; i < arr.size(); i++)
        {
            for(j = i+1; j < arr.size(); j++)
            {
                if((arr[i] == (2 * arr[j])) || ((arr[i]*2) == arr[j]))
                {
                    bFlag = true;
                    break;
                }
            }
        }
        
        return bFlag;
    }
};