class Solution {
public:
    string longestPalindrome(string s) {

        int maxlen = 1;
        int start = 0;

        for(int i = 0 ; i < s.size() ; i++)
        {
            int l = i; 
            int r = i;

            //if even 
            while( l >= 0 && r < s.size() && s[l] == s[r])
            {
                if(r - l + 1 > maxlen)
                {
                    maxlen = r - l + 1; 
                    start = l;
                }
                l--;
                r++;
            }

            l = i;
            r = i +1;
            while ( l >= 0 && r < s.size() && s[l] == s[r])
            {
                if(r - l + 1 > maxlen)
                {
                    maxlen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }
        return s.substr(start  ,maxlen);
        
    }
};
