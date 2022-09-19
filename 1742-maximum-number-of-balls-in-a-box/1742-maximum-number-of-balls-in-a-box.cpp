class Solution {
private :
    int boxNumber(int no)
    {
        int sum = 0;
        
        while(no != 0)
        {
            sum = sum + (no % 10);
            no = no / 10;
        }
        
        return sum;
    }
    
public:
    int countBalls(int lowLimit, int highLimit) {
        int i = 0, temp = 0, ans = 0;
        map<int, int> m;
        
        for(i = lowLimit; i <= highLimit; i++)
        {
            if(i / 10 == 0)
            {
                m[i] = m[i] + 1;
            }
            else
            {
                temp = boxNumber(i);                
                m[temp] = m[temp] + 1;
            }
        }
        
        
        for(auto it : m)
        {
            if(it.second > ans)
            {
                ans = it.second;
            }
        }
        
        return ans;
    }
};