class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        
        int i = 0, j = 0;
        int size1 = nums1.size(), size2 = nums2.size();
        int iCnt = 1, iMid = 0;
        bool isOdd = false;
        
        if((size1+size2)%2 != 0)
        {
            isOdd = true;
            iMid = (size1+size2)/2;
        }
        else
        {
            iMid = ((size1+size2)/2) - 1;
        }
        
        while(i < size1 && j < size2)
        {
            if(nums1[i] < nums2[j])
            {
                temp.push_back(nums1[i]);
                i++;
            }
            else
            {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i < size1)
        {
            temp.push_back(nums1[i]);
            i++;
        }
        
        while(j < size2)
        {
            temp.push_back(nums2[j]);
            j++;
        }
        
        if(isOdd == true)
        {
            return temp[iMid];
        }
        return ((double)(temp[iMid] + temp[iMid+1])/2);
    }
};