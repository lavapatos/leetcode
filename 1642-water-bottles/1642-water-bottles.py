class Solution(object):
    def numWaterBottles(self, numBottles, numExchange):
        ans = numBottles
        while numBottles > 0 and numBottles >= numExchange:
            remain = numBottles
            numBottles /= numExchange
            ans += numBottles
            remain -= numBottles*numExchange
            numBottles += remain
        return ans 
        """
        :type numBottles: int
        :type numExchange: int
        :rtype: int
        """
        