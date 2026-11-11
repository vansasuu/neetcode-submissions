class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int x = nums.size(); 

        vector <int > result(x); // to store exactly n values

        int p = 0 ; // positve indexed 
        int n = 1 ; // negitive indexed

        for(int num : nums)
        {
            if(num > 0) // we got positve number
            {
                result[p] = num;
                p += 2;
            }else
            {
                result[n] = num;
                n +=2;
            }
        }
        return result;
    }
};