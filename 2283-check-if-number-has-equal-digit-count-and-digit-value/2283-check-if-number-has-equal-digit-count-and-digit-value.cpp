class Solution {
public:
    bool digitCount(string num) {
        map<int, int> m;
        int i = 0, no = 0;
        
        for(i = 0; i < num.length(); i++)
        {
            if(m.find(i) == m.end())
            {
                m[i] = 0;
            }
            
            no = num[i] - '0';
            
            m[no]++;
        }
        
        for(i = 0; i < num.length(); i++)
        {
            
            if((num[i] - '0') != m[i])
            {
                break;
            }
        }
        
        if(i == num.length())
        {
            return true;
        }
        return false;
    } 
};