class Solution {
public:
    int firstUniqChar(string s) {
        map <char,int> m;
        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) != m.end()) {m.find(s[i])->second = -1;}
            else {m.insert({s[i],i});}
        }
        int min = s.size()+1;
        map <char,int> :: iterator rec = m.begin();
        while (rec != m.end()) {
            if (rec->second < min && rec->second != -1) {min = rec->second;}
            rec++;
        }
        if (min == s.size()+1) {return -1;}
        return min;
    }
};