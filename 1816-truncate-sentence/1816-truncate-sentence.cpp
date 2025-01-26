class Solution {
public:
    string truncateSentence(string s, int k) {
        string resp;
        int count = 0;
        for (auto c : s) {
            if (c == ' ') {count++;}
            if (count == k) {break;}
            resp += c;
        }
        return resp;
    }
};