class Solution(object):
    def majorityElement(self, nums):
        check = {}
        for n in nums:
            if n in check:
                check[n] += 1
            else:
                check[n] = 1
        return max(check, key=check.get)

        