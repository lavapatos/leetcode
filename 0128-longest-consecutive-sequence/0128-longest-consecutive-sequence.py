class Solution(object):
    def longestConsecutive(self, nums):
        check = set(nums)
        ans = 0

        for n in check:
            prev = n - 1
            if prev not in check:
                currentLength = 1
                toFind = n + currentLength
                while toFind in check:
                    currentLength += 1
                    toFind += 1
                ans = max(ans, currentLength)
        return ans