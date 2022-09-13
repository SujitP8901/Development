class Solution {
private:
    bool check(string s)
    {
        int i = 0;
        
        bool red = false;
        bool green = false;
        bool blue = false;
        
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] == 'R')
            {
                red = true;
            }
            else if(s[i] == 'G')
            {
                green = true;
            }
            else if(s[i] == 'B')
            {
                blue = true;
            }
            
            if(red == true && blue == true && green == true)
            {
                break;
            }
        }
        
        return (red && blue && green);
    }
    
public:
    int countPoints(string rings) {
        int iCnt = 0;
        int ring = 0, rod = 1;
        vector<string> ringsCount(10);
        
        while(rod < rings.length())
        {
            string temp = ringsCount[rings[rod] - '0'];
            temp.push_back(rings[ring]);
            
            ringsCount[rings[rod] - '0'] = temp;
            
            ring = ring+2;
            rod = rod+2;
        }
        
        for(int i = 0; i < ringsCount.size(); i++)
        {
            if(ringsCount[i].length() >= 3)
            {
                if(check(ringsCount[i]) == true)
                {
                    iCnt++;
                }
            }
        }
        
        return iCnt;
    }
};