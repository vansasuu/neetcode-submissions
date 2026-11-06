class Solution {
public:
    char findTheDifference(string s, string t) {

        vector < int> poop(26, 0);

        for(char c : s)
        {
            poop[c - 'a']++;
        }
        for(char c : t)
        {
            poop[c - 'a']--;

            if(poop[c - 'a'] < 0)
            {
                return c;
            }
        }
    return ' ';
        
    }
};