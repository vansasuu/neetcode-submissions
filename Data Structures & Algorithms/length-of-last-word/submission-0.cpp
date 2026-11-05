class Solution {
public:
    int lengthOfLastWord(string s) {

        // go backword and check length of word till space and just return length before the space
        
        int n = s.size() - 1 ;
        int count = 0 ;    

        while( n >= 0 && s[n] == ' ')
        {
            n--;
        }
        while (n >= 0 && s[n] != ' ')
        {
            count++;
            n--;
        }
        return count;
    }
};