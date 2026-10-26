class Solution(object):
    def pivotArray(self, nums, pivot):
        n = len(nums)
        low = []
        high = []
        for i in range(n):
            if nums[i] < pivot:
                low.append(nums[i])
            elif nums[i] > pivot:
                high.append(nums[i])
        for i in range(n-len(low)-len(high)):
            low.append(pivot)
        low.extend(high)
        return low