class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int pressTime = 0, maxPressTime = 0;
        char key = '\0';
        
        for(int i = 0; i < releaseTimes.size(); i++)
        {
            if(i == 0)
            {
                pressTime = releaseTimes[i]; 
            }
            else
            {
                pressTime = releaseTimes[i] - releaseTimes[i-1];
            }
            
            if(pressTime > maxPressTime)
            {
                maxPressTime = pressTime;
                key = keysPressed[i];
            }
            else if(pressTime == maxPressTime)
            {
                if((keysPressed[i] - 'a') >= (key - 'a'))
                {
                    key = keysPressed[i];
                }
            }
            
        }
        
        return key;
    }
};