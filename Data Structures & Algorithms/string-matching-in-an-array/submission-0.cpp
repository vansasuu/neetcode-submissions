class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {

        vector < string > result; 
        int w = words.size();

        for(int i = 0 ; i < w ; i++ )
        {
            for(int j = 0 ; j < w ; j++)
            {
                if(i == j)
                    continue;
            
            if(words[j].find(words[i]) != string::npos)
            {
                result.push_back(words[i]);
                break;
            }
        }
        
        }
        return result;
    }
};