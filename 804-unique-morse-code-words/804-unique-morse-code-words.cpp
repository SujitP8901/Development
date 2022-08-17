class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        string str = "";
        string mapping = "";
        map<string, int> m;
        
        for(int i = 0; i < words.size(); i++)
        {
            str = words[i];
            
            for(int j = 0; j < str.size(); j++)
            {
                mapping = mapping + arr[str[j]-'a'];
            }
            
            m[mapping]++;
            
            
            mapping = "";
        }
        
        int iCnt = 0;
        for(auto it : m)
        {
            iCnt++;
        }
        
        return iCnt;
    }
};