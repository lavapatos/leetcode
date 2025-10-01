def climbRec(n, memo):
    if n <= 1:
        return 1
    if n in memo:
        return memo[n]
    memo[n] = climbRec(n-1, memo) + climbRec(n-2, memo)
    return memo[n]
class Solution(object):
    def climbStairs(self, n):
        memo = {}
        return climbRec(n, memo)  
        """
        :type n: int
        :rtype: int
        """
        