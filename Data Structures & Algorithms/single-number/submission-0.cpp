class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //[3 2 3]
        //[2]
        // go thorugh nums if count= 1 
        // return 

        int survivor = 0; 
        
        for(int x : nums)
        {
            survivor = survivor ^ x;
        }
        return survivor;
    }
};
