class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        // just a simple loop to go through t[i]
        // one more loop bellow to 

        int index_of_s = 0 ;

        for(int i = 0 ; i < t.size(); i++)
        {
            if(t[i] == s[index_of_s])
            {
                index_of_s++;
            }
        }
            
        return index_of_s == s.size();

    }
};