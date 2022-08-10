class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = 0, i = 0;
        
        while((k != 0))
        {
            n++;
            if(i != arr.size() && arr[i] == n)
            {
                i++;
            }
            else
            {
                k--;
            }
        }
        return n;
    }
};