class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        vector<int> ans;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i = 0, j = 0, n1 = nums1.size(), n2 = nums2.size(); 
        
        while((i < n1) && (j < n2))
        {
            if(nums1[i] == nums2[j])
            {
                m[nums1[i]]++;
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j])
            {
                i++;
            }
            else if(nums1[i] > nums2[j])
            {
                j++;
            }
            
        }
        
        for(auto it : m)
        {
            ans.push_back(it.first);
        }
        
        return ans;
    }
};