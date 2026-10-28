class Solution(object):
    def getSneakyNumbers(self, nums):
        ans = []
        check = set()
        for n in nums:
            if n in check:
                ans.append(n)
            else:
                check.add(n)
        return ans

        