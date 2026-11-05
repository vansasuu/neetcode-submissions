class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int length = 0;
        int gap = 0; 

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]== 1)
            {
            length++;
            }
            else 
            {
                gap = max(gap , length);
                length = 0;
            }
        }
        gap = max(gap , length);

        return gap;
    }
};