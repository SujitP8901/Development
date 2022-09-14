class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int i = 0;
        int iCnt = 1, n = score.size();
        vector<string> ans;
        
        vector<int> v = score;
        map<int, int> m;
        
        sort(v.begin(), v.end());
        
        for(i = 0; i < v.size(); i++)
        {
            m[v[i]] = iCnt++;
        }
        
        iCnt--;
        
        for(i = 0; i < score.size(); i++)
        {
            auto it = m.find(score[i]);
            
            if(it->second == n)
            {
                ans.push_back("Gold Medal");
            }
            else if(it->second == n-1)
            {
                ans.push_back("Silver Medal");
            }
            else if(it->second == n-2)
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
                string temp = to_string((n - it->second + 1));
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};