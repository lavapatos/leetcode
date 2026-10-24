class Solution(object):
    def concatWithReverse(self, nums):
        n = len(nums)
        for i in range(n):
            nums.append(nums[n - i - 1])
        return nums
        