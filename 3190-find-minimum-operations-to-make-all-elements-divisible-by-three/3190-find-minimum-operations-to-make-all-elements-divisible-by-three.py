class Solution(object):
    def minimumOperations(self, nums):
        ans = 0
        for n in nums:
            if n % 3 > 0:
                ans += 1
        return ans
        