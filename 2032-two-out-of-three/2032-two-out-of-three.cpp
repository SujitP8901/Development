class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map<int, int> m;
        int n1 = nums1.size(), n2 = nums2.size(), n3 = nums3.size();
        int i = 0;
        vector<int> ans;
        
        for(i = 0; i < n1; i++)
        {
            m[nums1[i]] = 1;
        }
        
        for(i = 0; i < n2; i++)
        {
            auto it = m.find(nums2[i]);
            if(it == m.end())
            {
                m[nums2[i]] = 2;
            }
            else
            {
                if(it->second != 2 && (find(ans.begin(), ans.end(), nums2[i]) == ans.end()))
                {
                    ans.push_back(nums2[i]);
                    m.erase(nums2[i]);
                }
            }
        }
        
        for(i = 0; i < n3; i++)
        {
            auto it = m.find(nums3[i]);
            if(it == m.end())
            {
                m[nums3[i]] = 3;
            }
            else
            {
                if((it->second != 3) && (find(ans.begin(), ans.end(), nums3[i]) == ans.end()))
                {
                    ans.push_back(nums3[i]);
                    m.erase(nums3[i]);
                }
            }
        }
        
        return ans;
        
    }
};