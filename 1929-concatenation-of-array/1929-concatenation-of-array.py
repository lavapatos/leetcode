class Solution(object):
    def getConcatenation(self, nums):
        n = len(nums)
        for i in range (0,n):
            nums.append(nums[i])
        return nums