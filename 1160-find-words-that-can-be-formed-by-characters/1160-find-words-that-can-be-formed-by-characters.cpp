class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int resp = 0;
        map <char, int> m;
        for (auto c : chars) {
            m[c]++;
        }
        for (auto w : words) {
            map <char, int> temp = m;
            int size_w = w.size();
            if (size_w <= chars.size()) {
                for (auto c : w) {
                    if (temp.find(c) != temp.end() && temp.find(c)->second > 0) {
                        temp[c]--;
                        size_w--;
                    }
                }
                if (!size_w) {resp += w.size();}
            }
        }
        return resp;
    }
};