class Solution {
public:
    int firstUniqChar(string s) {

        int count[26] = {0}; // to match alpahbets to number

        for(char c :s)
        {
            count[c - 'a']++; // to count all the alaphets but in numbers;
        }

        for(int i = 0 ; i < s.size() ; i++ ) // same loop
        {
            if(count[s[i] - 'a'] == 1) // that means its unique
            {
                return i;
            }
        }
        return -1;
    }
};