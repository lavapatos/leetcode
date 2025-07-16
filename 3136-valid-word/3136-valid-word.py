class Solution(object):
    def isValid(self, word):
        vowels = 'aAeEiIoOuU'
        nCount = 0
        vCount = 0
        if len(word) < 3:
            return False
        for c in word:
            if ((ord(c)<48) or (ord(c)>57 and ord(c)<65) or (ord(c)>90 and ord(c)<97) or (ord(c)>122)):
                return False
            if ord(c)>47 and ord(c)<58:
                nCount += 1
            if c in vowels:
                vCount += 1
        return (vCount and len(word) > vCount + nCount) == True