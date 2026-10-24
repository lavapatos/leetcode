class Solution(object):
    def recoverOrder(self, order, friends):
        ans = []
        for f in order:
            if f in friends:
                ans.append(f)
        return ans
        """
        :type order: List[int]
        :type friends: List[int]
        :rtype: List[int]
        """
        