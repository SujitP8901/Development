class Solution{
    public:
    vector<int> twoSum(vector<int> &vec, int target)
    {
        vector<int> ans;
        int iFirst = 0, iSecond = 0, iRem = 0, size = vec.size();
        
        for(iFirst = 0; iFirst < size-1; iFirst++)
        {
            iRem = target - vec[iFirst];
            
            for(iSecond = iFirst + 1; iSecond < size; iSecond++)
            {
                if(iRem == vec[iSecond])
                {
                    ans.push_back(iFirst);
                    ans.push_back(iSecond);
                    break;
                }
            }
            
            if(ans.size() != 0)
            {
                break;
            }
        }
        return ans;
    }
    
};
