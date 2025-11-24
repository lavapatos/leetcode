class Solution(object):
    def prefixesDivBy5(self, nums):
        current = 0
        ans = []
        for n in nums:
            current = current << 1
            current += n
            #print(current)
            ans.append(current%5==0)
        return ans
            


        