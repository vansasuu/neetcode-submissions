class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map < char , int > counts;
        
        if(s.length() != t.length())
        {
            return false; 
        }
        for ( int i = 0 ; i < s.length() ; i++)
        {
            counts[s[i]]++;
        }
        for ( int i = 0 ; i < t.length(); i++)
        {
            counts[t[i]]--;

            if(counts[t[i]] < 0)
            {
                return false;
            }
        }
        return true;
    }
};
