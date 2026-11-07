class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // start from left to right squre of each number and save it in one more dynamic array named reuslt ;

        //then sort(result)
    vector < int > result ; 
        for ( int i = 0 ; i < nums.size() ; i++)
        {
            int square = nums[i] * nums[i];
            result.push_back(square);
        }
        sort(result.begin() , result.end());
        return result ;
        
    }
};