class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map < int , int > sum;

        for(int i = 0 ; i < nums.size (); i ++)
        {
            int current = nums[i];
            int partner = target - current;

            if(sum.find(partner)!= sum.end())
            {
                return {sum[partner], i};
            }
            sum[current] = i;
        }
        return {};
    }
};
