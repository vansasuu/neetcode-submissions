class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set < int > seen ;

        for (int i = 0 ; i < nums.size(); i++)
        {
            int current = nums[i]; 
            
            if(seen.find(current)!= seen.end())
            {
                return true;
            }
            seen.insert(current);
        }
        return false;
     }
};