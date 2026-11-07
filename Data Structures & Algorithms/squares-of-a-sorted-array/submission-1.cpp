class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector < int > result(nums.size());

        int left = 0 ; 
        int right = nums.size() - 1;
        int index = nums.size() - 1;

        while(left <= right)
        {
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];

            if(leftsq < rightsq)
            {
                result[index] = rightsq;
                right--;
            }
            else
            {
                result[index] = leftsq;
                left++;
            }
            index--;
        }
    return result;
        
    }
};