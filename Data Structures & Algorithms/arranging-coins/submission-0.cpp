class Solution {
public:
    int arrangeCoins(int n) {
        
        long long small  = 0 ; // for binary
        long long big = n ; // to max 
        long long ans = 0; // to store answer for how many max rows

        while (small <= big )
        {
            long long mid = small + ( big - small ) / 2 ; // to find mid    
            long long coins = mid * (mid + 1) / 2; // best rows formula

            if(coins == n) // if exact coins are there for n steps
            {
                return mid; // get the mid that we guessed
            }
            if( coins < n) // if best row that we could make is less than given
            {
                ans = mid ; // then we still might be on the n
                small = mid +1 ;
            }else {
                big = mid - 1;
            }
        }
        return ans;
    }
    
};