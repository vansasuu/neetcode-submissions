class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map < int , int > last; // to store to check if repeated

        for(int i = 0 ; i < nums.size() ; i++) // for loop start
        {
            if(last.count(nums[i])) // if we have seen this before count it
            {
                if(i - last[nums[i]] <= k) // to check if its matching conditon
                {
                    return true; // if it matches then nice
                }
            }last[nums[i]] = i; // if no count just put 
        } 
        return false;
    }
};