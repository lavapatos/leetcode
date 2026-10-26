class Solution(object):
    def mapWordWeights(self, words, weights):
        ans = ""
        for w in words:
            lW = 0
            for c in w:
                lW += weights[ord(c)%97]
            ans += chr(122-lW%26)
        return ans