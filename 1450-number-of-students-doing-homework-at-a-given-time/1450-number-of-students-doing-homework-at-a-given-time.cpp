class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int iCnt = 0, i = 0;
        
        for(i = 0; i < startTime.size(); i++)
        {
            if((startTime[i] <= queryTime) && (endTime[i] >= queryTime))
            {
                iCnt++;
            }
        }
        
        return iCnt;
    }
};