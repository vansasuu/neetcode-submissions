class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map < int , int > nextg; // this is for storing the next greater
        stack < int > st;

        for( int num : nums2) // for numbers in nums2
        {
            while(!st.empty() && num > st.top()) // as long as the stack is not empty and current num is bigger than top of the stack 
            {
                nextg[st.top()] = num; // we store top with num 
                st.pop() ; // and remove it from there
            }
            st.push(num);
        }
    vector < int > result ; 
        for ( int num : nums1)
        {
            if(nextg.count(num))
            {
                result.push_back(nextg[num]);
            }else
            {
                result.push_back(-1);
            }
        }
return result;

        
    }
};