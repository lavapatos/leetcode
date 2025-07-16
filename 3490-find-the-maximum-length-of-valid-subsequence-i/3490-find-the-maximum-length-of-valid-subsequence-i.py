class Solution(object):
    def maximumLength(self, nums):
        eCount, oCount, eDP, oDP = 0, 0, 0, 0
        for n in nums:
            if not n % 2:
                eCount += 1
            else:
                oCount += 1
        for n in nums:
            if not n % 2:
                eDP = max(eDP, oDP + 1)
            else:
                oDP = max(oDP, eDP + 1)
        return max(eCount, oCount, eDP, oDP)