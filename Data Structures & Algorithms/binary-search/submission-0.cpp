class Solution {
public:
    int search(vector<int>& nums, int target) {

        for ( int i = 0 ; i < nums.size() ; i++) // loop through array 
        {
            if(nums[i] == target) // if we get the target 
            {
                return i; // give out index of that 
            }
        }
        return -1;
    }
};
