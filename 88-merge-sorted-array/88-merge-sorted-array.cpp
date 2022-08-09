class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int iCnt1 = 0, iCnt2 = 0;
        
        for(iCnt1 = m, iCnt2 = 0; iCnt2 < nums2.size(); iCnt2++, iCnt1++)
        {
            nums1[iCnt1] = nums2[iCnt2];
        }
        
        sort(nums1.begin(), nums1.end());
    }
};