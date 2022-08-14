class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0;
        char ans = '\0';        
        
        for(i = 0; i < letters.size(); i++)
        {
            if(letters[i] > target)
            {
                ans = letters[i];
                break;
            }
        }
        if(i == letters.size())
        {
            return letters[0];
        }
        return ans;
    }
};