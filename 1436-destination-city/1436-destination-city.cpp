class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set <string> check;
        for (auto p : paths) {
            check.insert(p[0]);
        }
        for (auto p : paths) {
            if (check.find(p[1]) == check.end()) {return p[1];}
        }
        return "a";
    }
};