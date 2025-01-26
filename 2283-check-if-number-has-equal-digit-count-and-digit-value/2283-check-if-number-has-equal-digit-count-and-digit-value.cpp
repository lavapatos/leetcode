class Solution {
public:
    bool digitCount(string num) {
        map <int, int> check;
        for (auto c : num) {
            check[c-'0']++;
        }
        for (int i = 0; i < num.size(); i++) {
            if (check.find(i)->second != num[i]-'0') {return 0;}
        }
        return 1;
    }
};