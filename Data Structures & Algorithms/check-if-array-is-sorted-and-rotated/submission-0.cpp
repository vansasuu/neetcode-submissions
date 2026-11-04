class Solution {
public:
    bool check(vector<int>& nums) {

        int drop_index = -1;

        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            if ( nums[i] > nums[i +1] )
            {
                drop_index = i;
                break;
            }
        }
        if(drop_index == -1)
        {
            return true;
        }
        for( int j = drop_index + 1 ; j < nums.size() - 1 ; j++)
        {
            if(nums[j] > nums[j +1])
            {
                return false;
            }
        }
        return nums.back() <= nums.front();
        
    }
};