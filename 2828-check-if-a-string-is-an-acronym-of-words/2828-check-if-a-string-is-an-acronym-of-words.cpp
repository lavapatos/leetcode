class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int i =  0;
        for (auto c : s) {
            if (c != words[i][0] || s.size() != words.size()) {return false;}
            i++;
        }
        return true;
    }
};