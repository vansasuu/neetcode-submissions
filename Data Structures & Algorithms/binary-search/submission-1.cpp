class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start = 0 ; // for binary search 
        int end = nums.size() - 1; // to calculate
        

        while(start <= end) // till where to run
        {
            int mid = start + ( end - start ) / 2; // should know that first

            if(nums[mid] == target) // if found return fast
            {
                return mid;
            }
            else if (nums[mid] < target) // if its on the right
            {
                start = mid +1; // new right will be 
            }else{                 // if on the left
                end = mid - 1; // new end will be this
            }
        }
        return -1;
    }
};
