class Solution {
public:
    int reverse(int x) {

        string s = to_string(x); // to string conversion 
        int left = (s[0] == '-') ? 1 : 0; // left is that which is not - 
        int right = s.size() - 1; 

        while(left < right)
        {
            swap(s[left] , s[right]);
            left++;
            right--;
        }
        long long ans = stoll(s);
        if(ans < INT_MIN || ans > INT_MAX)
        {
            return 0;
        }
        return (int)ans;
    }
};
