class Solution {
public:
    int mySqrt(int x) {

        long long start = 1; // binary 
        long long end = x; // the number whos sqr we want
        long long ans = 0; // rounded of number

        while ( start <= end)
        {
           
            long long mid = start + ( end - start) /2 ;
            long long guess = mid * mid;

            if(guess == x)
            {
                return mid;
            }
            if(guess < x) // if mid mid is smaller than x
            {
                ans = mid;
                start = mid +1 ;
            }
            else {
                end = mid -1;
            }
        }
        return ans;
    }
};