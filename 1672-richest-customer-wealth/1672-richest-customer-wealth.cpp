class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int may = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int act = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                act += accounts[i][j];
            }
            if (act > may) {
                may = act;
            }
        }
        return may;
    }
};