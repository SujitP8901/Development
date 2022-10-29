class Solution {
    public boolean checkRecord(String s) {
        int iCnt = 0, absentDays = 0, consecutiveLate = 0;
        
        for(iCnt = 0; iCnt < s.length(); iCnt++)
        {
            if(s.charAt(iCnt) == 'A')
            {
                absentDays++;
            }
            
            if(s.charAt(iCnt) == 'L')
            {
                consecutiveLate++;
            }
            else
            {
                consecutiveLate = 0;
            }
            
            if((absentDays >= 2) || (consecutiveLate >= 3))
            {
                break;
            }                
        }
        
        if(iCnt == s.length())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}