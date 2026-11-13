class Solution:
    def climbStairs(self, n: int) -> int:

        if n <= 2:
            return n   
        
        step1 = 1 # for one step
        step2 = 2 # for two steps

        for i in range ( 3 , n + 1): # we start from three coz 1 and 2 are sorted
            step3 = step1 + step2 # to get the third one first
            step1 = step2 # step1 becomes step 2 so that we dont go back from 1st stair 
            step2 = step3 # same
        return step2    
        