class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int start = 0; // start to climb
        int end = nums.size() - 1; // till where to walk

        while(start < end) // loop
        {
            int mid = start + (end - start) / 2; // to find from middle;

            if(nums[mid] < nums[mid+1]) // why we walking uphill
            {
                start = mid +1; // its still much higher
            }else {
                end = mid; // if lower then we could be at peak
            }
        }
        return start;
    }
};