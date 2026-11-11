class Solution {
public:
    int search(vector<int>& nums, int k) {

        int s= 0 ; // binary search
        int e = nums.size() -1 ; 

        while(s <= e) // loop bound
        {
            int mid = s + ( e - s) /2 ;

            if(nums[mid] == k)
            {
                return mid; // we get our answer if mid was the target
            }
            if(nums[s] <= nums[mid]) // if its to the left of array 
            {
                if(nums[s] <= k && k < nums[mid]) // if it matches both conditions
                {
                    e = mid -1; // go left
                }else
                {
                    s = mid +1;
                }
            }if(nums[e] >= nums[mid])// if its to the right of array
            {
                if(k <= nums[e] && k > nums[mid]) // if matches both conditons
                {
                    s = mid +1;
                }
                else
                {
                    e = mid - 1;
                }
            }
        }
        return -1;
    }
};
