/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        int start = 1 ; //binary ;
        int end = n;
        
        while(start <= end)//loop for possible n
        {
            int mid = start + ( end - start) /2; // to get mid
            int result = guess(mid); // that mid check if result 

            if(result == 0) //if it is
            {
                return mid; // because mid was our correct guess
            }
            else if ( result == -1) // if result is higher than pick
            {
                end = mid - 1; //check left side of the game
            }
            else  // check right side of the mid game
            {
                start = mid + 1 ;       
            }
        }
        return -1;
    }
};