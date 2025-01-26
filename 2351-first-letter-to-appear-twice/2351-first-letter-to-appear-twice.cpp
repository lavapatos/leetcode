class Solution {
public:
    char repeatedCharacter(string s) {
        map <char,int> m;
        for (auto c : s) {
            m[c]++;
            if (m[c] == 2) {return c;}
        }
        return '0';
    }
};