class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       map <string, int> m;
       string check;
       for (int i = 0; i < s1.size(); i++) {
           if (s1[i] == '\ ') {
               m[check]++;
               check = "";
            }
            else {check += s1[i];}
            if (i == s1.size() - 1) {
               m[check]++;
               check = "";
            }
       }

       for (int i = 0; i < s2.size(); i++) {
           if (s2[i] == '\ ') {
               m[check]++;
               check = "";
            }
            else {check += s2[i];}
            if (i == s2.size() - 1) {m[check]++;}
       }

       map <string, int> :: iterator rec = m.begin();
       vector <string> resp;
       while (rec != m.end()) {
           if (rec->second == 1) {resp.push_back(rec->first);}
           rec++;
       }
       return resp;
    }
};