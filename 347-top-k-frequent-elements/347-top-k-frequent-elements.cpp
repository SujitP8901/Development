class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> ans;        
        
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        priority_queue<pair<int, int>> pq;
        
        for(auto it : m)
        {
            pq.push({it.second, it.first});
        }
        
        while(k--)
        {
            auto it = pq.top();
            pq.pop();
            ans.push_back(it.second);
        }
        
        return ans;
    }
};