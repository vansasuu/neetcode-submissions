class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char , int > charIndex ;
        unordered_map<string , int > wordIndex;

        int n = pattern.size();
        istringstream iss(s);
        string word;
        int i = 0;

        while( iss >> word)
        {
            if(i == n)
            {
                return false;
            }
            if(charIndex[pattern[i]] != wordIndex[word])
            {
                return false;
            }

            charIndex[pattern[i]] = i +1;
            wordIndex[word] = i+1;
            i++;
        }
        return i == n;
    }
};