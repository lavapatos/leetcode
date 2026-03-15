class Solution(object):
    def isValid(self, s):
        check = []
        for c in s:
            if c == '(' or c == '[' or c == '{':
                check.append(c)
            elif len(check) == 0 or c == ')' and check[-1] != '(' or c == ']' and check[-1] != '[' or c == '}' and check[-1] != '{':
                return False
            else:
                check.pop()
        return len(check) == 0
            