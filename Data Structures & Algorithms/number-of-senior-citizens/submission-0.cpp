class Solution {
public:
    int countSeniors(vector<string>& details) {
        

        // 7868190130 M 75 22
        // just go to the 11th and 12th index and if its greater than 60 then just return whatever that string[i] is ;

        int count = 0 ; // counter

        for(const string& s: details) // to copy the part to be checked
        {
          int age  = (s[11] - '0') *10 + (s[12] - '0');
            {
                if(age > 60)
                {
                    count++;
                }
            }
        }
      return count;
    }
};