class Solution {
public:
    string finalString(string s) {
        string resp;
        for (auto c : s) {
            if (c == 'i') {reverse(resp.begin(),resp.end());}
            else {resp += c;}
        }
        return resp;
    }
};