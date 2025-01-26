class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int resp = 0;
        for (auto h : hours) {
            if (h >= target) {resp++;}
        }
        return resp;
    }
};