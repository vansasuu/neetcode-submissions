class Solution {
public:
    bool isSubsequence(string s, string t) {

        int indexS = 0;

        for(int i = 0 ; i < t.size() ; i++)
        {
            if(t[i]==s[indexS])
            {
                indexS++;
            }
        }
        return indexS == s.size();
    }
};