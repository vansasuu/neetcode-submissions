class Solution:
    def singleNumber(self, nums: List[int]) -> int:

        start = 0

        for num in nums: # for numbers in num
            start ^= num # ^ this is operation 1 or 0 so basically if number is that stays single will be returned
        return start 
        