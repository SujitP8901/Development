class Solution {
private :
    int findEle(vector<int> arr, int key)
    {
        int ans = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == key)
            {
                ans = i;
                break;
            }
        }
        
        return ans;
    }
        
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int element = 0, nextGreater = 0, actualPos = 0;
        
        vector<int> ans;
        
        for(i = 0; i < nums1.size(); i++)
        {
            element = nums1[i];
            actualPos = findEle(nums2, element);
            
            for(j = actualPos; j < nums2.size(); j++)
            {
                if(nums2[j] > element)
                {
                    nextGreater = nums2[j];
                    break;
                }
            }
            
            if(j == nums2.size())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(nextGreater);
            }
        }
        
        return ans;
    }    
};