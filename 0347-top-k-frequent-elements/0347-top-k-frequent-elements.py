class Solution(object):
    def topKFrequent(self, nums, k):
        check = {}
        for n in nums:
            if n in check:
                check[n] += 1
            else:
                check[n] = 1
        i = 0
        ans = []
        while i < k:
            ans.append(max(check, key=check.get))
            del check[max(check, key=check.get)]
            i += 1
        return ans
        