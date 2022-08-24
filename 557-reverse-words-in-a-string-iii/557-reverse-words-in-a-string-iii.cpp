class Solution {
private:
    void reverseX(string& str)
    {
        int s = 0, e = str.length()-1;
        
        while(s <= e)
        {
            swap(str[s], str[e]);
            s++;
            e--;
        }
    }
    
public:
    string reverseWords(string s) {
        int i = 0;
        string word = "";
        string ans = "";
        
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')
            {
                word = word + s[i];
            }
            else
            {
                reverseX(word);
                ans = ans + word + " ";
                word = "";
            }
        }
        
        if(word.length() != 0)
        {
            reverseX(word);
            ans = ans + word;
        }
        
        return ans;
    }
};