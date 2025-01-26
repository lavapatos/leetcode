class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map <int, int> m;
        for (auto n : nums) {
            if (n%2 == 0) {
                m[n]++;
            }
        }
        if (m.empty()) {return -1;}
        int max = 0, resp = -1;
        for (auto s : m) {
            if (s.first < resp && s.second == max || s.first > resp && s.second > max) {
                max = s.second;
                resp = s.first;
            }
        }
        return resp;    
    }
};