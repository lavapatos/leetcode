class Solution(object):
    def sortColors(self, nums):
        zeroes = 0
        ones = 0
        two = 0
        for n in nums:
            if n == 0:
                zeroes += 1
            elif n == 1:
                ones += 1
            else:
                two += 1
        i = 0
        while zeroes or ones or two:
            if zeroes:
                nums[i] = 0
                zeroes -= 1
                i+= 1
            elif ones:
                nums[i] = 1
                ones -= 1
                i += 1
            else:
                nums[i] = 2
                two -= 1
                i += 1
        