class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector < int > first(26, 0);

        for( char c : words[0])
        {
            first[ c - 'a']++;
        }
        for(int i = 1 ; i < words.size() ; i++)
        {
            vector < int > remaning(26, 0);
            for( char c : words[i])
            {
                remaning[ c - 'a']++;
            }
            for(int j = 0 ; j < 26 ; j++)
            {
                first[j] = min(first[j], remaning[j]);
            }
        }
        vector < string > result; 

        for(int j = 0 ; j < 26 ; j++)
        {
            while(first[j]>0)
            {
                result.push_back(string(1 , j + 'a'));
                first[j]--;
            }
        }
        return result;
    }
};