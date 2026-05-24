class Solution(object):
    def moveZeroes(self, nums):
        l,r = 0,1
        while(r < len(nums)):
            if nums[l] == 0:
                while(r < len(nums) and nums[r] == 0):
                    r += 1
                if r < len(nums):
                    nums[l], nums[r] = nums[r], nums[l]
                l, r = l+1, r+1
            else:
                l, r = l+1, r+1


        