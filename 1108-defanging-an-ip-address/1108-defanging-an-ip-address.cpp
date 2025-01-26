class Solution {
public:
    string defangIPaddr(string address) {
        string resp;
        for (auto c : address) {
            if (c == '.') {resp += "[.]";}
            else {resp += c;}
        }
        return resp;
    }
};