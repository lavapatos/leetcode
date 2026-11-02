class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int> dp;
        dp.push_back(0);

        for (int i = 1; i <= amount; i++) {
            int minSum = amount+2;
            for (auto c : coins) {
                if (i >= c) {minSum = min(minSum, dp[i-c]+1);}
            }
            dp.push_back(minSum);
        }

        for (auto b : dp) {cout<<b<<endl;}
        return ((dp[amount] == amount+2) ? -1 : dp[amount]);
        
    }
};