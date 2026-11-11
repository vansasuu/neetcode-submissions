class Solution {
public:
    string largestGoodInteger(string num) {

        char max_digit = 0; // to store current max 

        for(int i = 0 ; i < (int)num.size() - 2 ; i++) // so it doesnt go out of bounds
        {
            if(num[i] == num[i+1] && num[i+1] == num[i+2])// to check three consicitive
            {
                if(num[i] > max_digit)
                {
                    max_digit = num[i];
                }
            }
        }
        if(max_digit == 0){ // then we didnt find any did we;
        return "";
        }
         return string(3 , max_digit)   ;
    }
};