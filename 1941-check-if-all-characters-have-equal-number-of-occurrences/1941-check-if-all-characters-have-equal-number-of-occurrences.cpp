class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map <char, int> m;
        for (auto c : s) {
            m[c]++;
        }
        map <char, int>::iterator rec = m.begin();
        int check = rec->second;
        while (rec != m.end()) {
            if (rec->second != check) {return 0;} 
            rec++;
        }
        return 1;
    }
};