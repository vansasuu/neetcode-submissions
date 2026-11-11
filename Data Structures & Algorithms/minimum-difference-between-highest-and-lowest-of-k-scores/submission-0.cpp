class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0; // if k is only one number;

        sort(nums.begin() , nums.end()); // to sort the array first

        int n = nums.size();
        int min_diff = INT_MAX; // to store diff but lets keep it at max rn;

        for(int i = 0 ; i <= n - k ; i++) // size of array - how many we want to look at;
        {
            int lowest = nums[i]; // start is the lowest;
            int highest = nums[i+k-1]; // till how many k that we want

            int currentdiff = highest - lowest; // to find whats the actual current different right now
            if(currentdiff < min_diff)
            {
                min_diff = currentdiff;
            }

        }
        return min_diff;
    }
};