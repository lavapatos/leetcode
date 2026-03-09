class Solution(object):
    def wordPattern(self, pattern, s):
        words = s.split()
        if len(pattern) != len(words):
            return False
        check = {}
        used = set()
        for i in range(len(pattern)):
            if pattern[i] in check and check[pattern[i]] == words[i]:
                continue
            elif pattern[i] not in check and words[i] not in used:
                check[pattern[i]] = words[i]
                used.add(words[i])
            else:
                return False
        return True
