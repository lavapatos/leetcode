class Solution(object):
    def isAnagram(self, s, t):
        check = {}
        for c in s:
            if c in check:
                check[c] += 1
            else:
                check[c] = 1
        for c in t:
            if c in check:
                check[c] -= 1
                if check[c] == 0:
                    del check[c]
            else:
                return False
        return not check
        