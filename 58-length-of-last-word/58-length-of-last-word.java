class Solution {
    public int lengthOfLastWord(String s) {
        String str = s.trim();
        
        char[] ch = str.toCharArray();
            
        String lastWord = "";
        
        for(int i = str.length()-1; i >= 0; i--)
        {
            if(ch[i] != ' ')
            {
                lastWord = lastWord + ch[i];
            }
            else
            {
                break;
            }
        }
        
        return lastWord.length();
    }
}