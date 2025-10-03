
class Solution(object):
    def searchRange(self, nums, target):
        l, r, index = 0, len(nums)-1, -1
        if r < 0:
            return [-1,-1]
        ans = [-1,-1]
        while l <= r:
            m = (l+r)/2
            if nums[m] == target:
                index = m
                break
            elif nums[m] < target:
                l = m + 1
            else:
                r = m - 1
        if index == -1:
            return ans
        l = r = index
        while l > 0 and nums[l-1] == target:
            l -= 1
        while r < len(nums) - 1 and nums[r + 1] == target:
            r +=1
        return [l,r]