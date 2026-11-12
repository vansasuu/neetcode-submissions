class Solution:
    def singleNumber(self, nums: List[int]) -> int:

        nums.sort() # to sort the array for making it easier

        for i in range(0 , len(nums) -1 , 2) :# from 0 to last element jumping by 2 for pairs
            if nums[i] != nums[i+1]:
                return nums[i] # coz we want the number itself

        return nums[-1] # this is to get the last element in python coz all matches but no ans so this is ans           

        