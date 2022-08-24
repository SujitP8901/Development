class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int iCnt = 1, occ = 1, n = arr.size(), ans = arr[0], i = 0;
        
        occ = n/4;
        
        for(i = 0; i < n-1; i++)
        {
            if(arr[i] == arr[i+1])
            {
                iCnt++;
            }
            else
            {
                if(iCnt > occ)
                {
                    ans = arr[i];
                    break;
                }
                iCnt = 1;
            }
        }
        
        if(iCnt > occ)
        {
            ans = arr[i];
        }
        return ans;
    }
};