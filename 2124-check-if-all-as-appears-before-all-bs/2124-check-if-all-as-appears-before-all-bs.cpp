class Solution {
public:
    bool checkString(string s) {
        int k = 0;
        for (auto c : s) {
            if (c == 'b') {break;}
            else {k++;}
        }
        for (int i = k; i < s.size(); i++) {
            if (s[i] == 'a') {return 0;}
        }
        return 1;
    }
};