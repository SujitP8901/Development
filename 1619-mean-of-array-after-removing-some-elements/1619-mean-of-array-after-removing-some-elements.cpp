class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int removeElements = arr.size()/10;
        int start = 0, end = arr.size()-1;
        double sum = 0.0;
        
        while(removeElements != 0)
        {
            start++;
            end--;
            removeElements = removeElements - 2;
        }
        
        for(int i = start; i <= end; i++)
        {
            sum = sum + arr[i];
        }
        
        return sum/((end-start)+1);
    }
};