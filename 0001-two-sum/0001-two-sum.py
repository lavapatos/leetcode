class Solution(object):
    def twoSum(self, nums, target):
        check = {}
        for i in range(len(nums)):
            n = nums[i]
            remain = target - n
            if remain in check:
                return [i,check[remain]]
            else:
                check[n] = i
        
        