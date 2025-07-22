class Solution(object):
    def maximumUniqueSubarray(self, nums):
        n = len(nums)
        l, sum, max = 0, 0, 0
        check = set()

        for r in range(n):
            while nums[r] in check:
                sum -= nums[l]
                check.remove(nums[l])
                l += 1
            sum += nums[r]
            check.add(nums[r])
            if sum > max:
                max = sum
        return max