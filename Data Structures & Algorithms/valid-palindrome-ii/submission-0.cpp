class Solution {
public:
    bool validPalindrome(string s) {

        int left = 0 ; 
        int right = (int)s.size() -1 ;

        while(left < right)
        
            {
                if(s[left]!= s[right])
                {
                int l1 = left + 1 , r1 = right;

                while( l1 < r1 && s[l1]==s[r1])
                    {
                        l1++;
                        r1--;
                    }
                if(l1 >= r1) return true;
            

                int l2 = left , r2 = right - 1;

                while(l2 < r2 && s[l2] == s[r2])
                    {
                        l2++;
                        r2--;
                    }   
                if(l2 >= r2) return true;
                else
                {
                    return false; 
                }
        }
        left++;
            right--;
   
            }
            return true;
    
    }  
};