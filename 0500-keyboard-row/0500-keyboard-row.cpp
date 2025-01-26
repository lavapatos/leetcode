class Solution {
public:
    string row1 = "qwertyuiopQWERTYUIOP";
    string row2 = "asdfghjklASDFGHJKL";
    string row3 = "zxcvbnmZXCVBNM";
    unordered_set <char> r1;
    unordered_set <char> r2;
    unordered_set <char> r3;
    void crear () {
        for (auto c : row1) {r1.insert(c);}
        for (auto c : row2) {r2.insert(c);}
        for (auto c : row3) {r3.insert(c);}
    }
    bool sepuede (string w) {
        int check1 = 1, check2 = 1, check3 = 1;
        for (auto c : w) {
            if (r1.find(c) == r1.end()) {check1 = 0; break;}
        }
        for (auto c : w) {
            if (r2.find(c) == r2.end()) {check2 = 0; break;}
        }
        for (auto c : w) {
            if (r3.find(c) == r3.end()) {check3 = 0; break;}
        }
        return (check1 || check2 || check3);
    }
    vector<string> findWords(vector<string>& words) {
        crear();
        vector <string> resp;
        for (auto w : words) {
            if (sepuede(w)) {resp.push_back(w);}
        }
        return resp;
    }
};