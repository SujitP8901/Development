class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0)
        {
            return false;
        }
        return funct(n);
    }
    
    bool funct(int no)
    {
        if(no == 1)
        {
            return true;
        }
        else if(no % 2 == 0)
        {
            return funct(no/2);
        }
        else if(no % 3 == 0)
        {
            return funct(no/3);
        }
        else if(no % 5 == 0)
        {
            return funct(no/5);
        }
        else 
        {
            return false;
        }
    }
};