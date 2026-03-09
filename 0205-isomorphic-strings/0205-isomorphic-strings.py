class Solution(object):
    def isIsomorphic(self, s, t):
        if len(s) != len(t):
            return False
        check = {}
        used = set()
        for i in range(len(s)):
            if s[i] in check and check[s[i]] == t[i]:
                continue
            elif s[i] not in check and t[i] not in used:
                check[s[i]] = t[i]
                used.add(t[i])
                continue
            else:
                return False
        return True

        