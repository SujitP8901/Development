class Solution {
public:
    void changeToCamelCase(string& ans, string& word)
    {
        int j = 0;
        if(word.length() > 2)
        {
            if((word[j] >= 'a') && (word[j] <= 'z'))
            {
                word[j] = word[j] - 'a' + 'A';
                j++;
            }       
            
            for(j = 1; j < word.length(); j++)
            {
                if((word[j] >= 'A') && (word[j] <= 'Z'))
                {
                    word[j] = word[j] - 'A' + 'a';
                }
            }       
        }
        else
        {
            for(j = 0; j < word.length(); j++)
            {
                if((word[j] >= 'A') && (word[j] <= 'Z'))
                {
                    word[j] = word[j] - 'A' + 'a'; 
                }
            }
        }
        
        if(ans.length() == 0)
        {
            ans = ans + word;
        }
        else
        {
            ans = ans + " " + word;
        }
                    
        word = "";
    }
    
    string capitalizeTitle(string title) {
        int i = 0, j = 0;
        string word = "";
        string ans = "";
        
        for(i = 0; i < title.size(); i++)
        {
            if(title[i] != ' ')
            {
                word = word + title[i];
            }
            else
            {
                changeToCamelCase(ans, word);
            }
        }
        
        changeToCamelCase(ans, word);
        
        return ans;
    }
};