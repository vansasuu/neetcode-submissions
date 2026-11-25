class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map < char , int > count ; 

        int counter = 0;
        bool issodd = false;
        

        for(char c : s) // to count all chars s
        {
            count[c]++;
        }

        for (auto& p : count) // for check the count int to int
        {
            if(p.second % 2 == 0) // if even
            {
                counter = counter + p.second;
            }else
            {
                counter = counter + p.second - 1;
                issodd = true;
            }
        }
        if(issodd)
        {
            counter++;
        }
        return counter;
    }
};