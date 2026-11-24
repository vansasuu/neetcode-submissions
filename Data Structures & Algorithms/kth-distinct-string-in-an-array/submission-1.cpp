class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        // we count string 
        // the first alone will be first
        // so on 
        // return the kth alone
        

        unordered_map <string , int > count; // to count all occurence

        for ( const string& s : arr) // for counting in string array 
        {
            count[s]++; // counted
        }

        for( const string& s : arr) // for the count 
        {
            if(count[s] == 1 )
            {
                k--; // to get to the desired
                if(k == 0)
                {
                    return s;
                }
            }
            
        }
        return "";
    }
};