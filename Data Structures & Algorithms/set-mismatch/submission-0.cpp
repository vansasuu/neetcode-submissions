class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size() ; // easier 
        vector<int> count(n+1 , 0); // to count numbers 

        for ( int num : nums) // this is to count all the nums 
        {
            count[num]++;
        }
        int duplicate = -1;
        int missing = -1;

        for(int i = 1 ; i <= n ; i++)
        {
            if(count[i]== 2) // if we see it twice 
            {
                duplicate = i;
            }
            else if ( count[i] == 0)
            {
                missing = i;
            }
        }
        return { duplicate , missing} ;
    }
};