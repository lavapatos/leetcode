class Solution(object):
    def coinChange(self, coins, amount):
        dp = [0]

        for i in range(1,amount+1):
            minSum = float('inf')
            for c in coins:
                if i >= c:
                    minSum = min(minSum,dp[i-c]+1)
            dp.append(minSum)
        
        return -1 if dp[amount] == float('inf') else dp[amount]
        