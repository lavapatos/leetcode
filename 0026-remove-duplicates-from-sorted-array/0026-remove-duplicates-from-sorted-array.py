class Solution(object):
    def removeDuplicates(self, nums):
        if len(nums) == 1:
            return 1
        ans, j = 1, 1
        for i in range(len(nums)-1):
            while (nums[i] == nums[j] and j < len(nums)-1):
                j += 1
            if nums[i] != nums[j]:
                ans += 1
            nums[i+1] = nums[j]
        return ans
        