class Solution {
public:
    bool divideArray(vector<int>& nums) {

        unordered_map < int , int > count ; // to count all the numbers

        for(int num : nums)
        {
            count[num]++;
        }
        for(auto pair : count)
        {
            if(pair.second % 2 != 0) // if the count is not even 
            {
                return false;
            }
        }
        return true;
    }
};