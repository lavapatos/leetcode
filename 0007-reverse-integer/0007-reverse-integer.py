class Solution(object):
    def reverse(self, x):
        INT_MIN, INT_MAX = -2**31, 2**31 - 1
        ans = 0
        positive = x >= 0
        y = abs(x)
        while y > 0:
            last = y % 10
            ans *= 10
            ans += last
            y /= 10
        if positive and ans <= INT_MAX:
            return ans
        elif not positive and -ans >= INT_MIN:
            return -ans
        else:
            return 0