class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums) # to put into formula
        expected_sum = n * (n+1) //2 # summing is faster due to no needing to sort array
        return expected_sum - sum(nums) # whatever is left will be the answer

        
        