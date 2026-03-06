class Solution(object):
    def containsDuplicate(self, nums):
        check = set()
        for n in nums:
            if n in check:
                return True
            else:
                check.add(n)
        return False
        