class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int iCnt = 0, i = 0;
        int n = candyType.size()/2;
        map<int, int> m;
        
        for(i = 0; i < candyType.size(); i++)
        {
            m[candyType[i]]++;
        }
        
        for(auto it : m)
        {
            iCnt++;
        }
        
        if(iCnt >= n)
        {
            return n;
        }
        return iCnt;
    }
};