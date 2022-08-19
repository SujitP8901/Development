class Solution
{
public:
    void reverseString(vector<char>& s)
    {
        int start = 0, end = s.size()-1;
        char cTemp = '\0';
        while(start < end)
        {
            cTemp = s[start];
            s[start] = s[end];
            s[end] = cTemp;
            
            start++;
            end--;
        }
    }
};