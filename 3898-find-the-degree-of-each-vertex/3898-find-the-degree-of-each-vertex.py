class Solution(object):
    def findDegrees(self, matrix):
        ans = []
        for v in matrix:
            ans.append(sum(v))
        return ans
        