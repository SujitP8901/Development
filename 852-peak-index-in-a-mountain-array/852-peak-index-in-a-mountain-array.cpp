class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size()-1, mid = 0;
        
        while(start < end)
        {
            mid = (start + end)/2;
            
            if(arr[mid] < arr[mid+1])
            {
                start = mid+1;
            }
            else
            {
                end = mid;
            }
        }
        return start;        
    }
};