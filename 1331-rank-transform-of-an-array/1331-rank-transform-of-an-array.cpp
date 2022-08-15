class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v = arr;
        vector<int> ans;
        
        sort(v.begin(), v.end());
        
        int index = 1;
        map<int, int> m;
        
        for(int i = 0; i < v.size(); i++)
        {
            if(m.find(v[i]) == m.end())
            {
                m[v[i]] = index;
                index++;
            }
        }
        
        for(int i = 0; i < arr.size(); i++)
        {
            ans.push_back(m.find(arr[i])->second);
        }
        
        return ans;
    }
};