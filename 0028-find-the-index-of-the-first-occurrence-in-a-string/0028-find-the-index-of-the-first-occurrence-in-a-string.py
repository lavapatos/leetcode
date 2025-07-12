class Solution(object):
    def strStr(self, haystack, needle):
        h = len(haystack)
        n = len(needle)

        if n == 0:
            return 0

        if h < n:
            return -1

        lps = [0] * n
        length = 0
        i = 1

        while i < n:
            if needle[i] == needle[length]:
                length += 1
                lps[i] = length
                i += 1
            else:
                if length != 0:
                    length = lps[length - 1]
                else:
                    lps[i] = 0
                    i += 1

        i = 0
        j = 0

        while i < h:
            if needle[j] == haystack[i]:
                i += 1
                j += 1
            if j == n:
                return i - j

            elif i < h and needle[j] != haystack[i]:
                if j != 0:
                    j = lps[j - 1]
                else:
                    i += 1

        return -1