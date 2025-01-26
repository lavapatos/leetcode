class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int resp = 0;
        for (auto n: nums) {
            resp += (to_string(n).size() % 2 == 0);
        }
        return resp;
    }
};