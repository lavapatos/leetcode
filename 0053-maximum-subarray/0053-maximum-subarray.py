class Solution(object):
    def maxSubArray(self, nums):
        ans = nums[0]
        check = 0
        for num in nums:
            check += num
            if check > ans:
                ans = check
            if check <  0:
                check = 0
        return ans
        """
        :type nums: List[int]
        :rtype: int
        """
        