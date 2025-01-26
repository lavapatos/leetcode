class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string resp = s;
        for (auto i : indices) {
            resp[indices[i]] = s[i]; 
        }
        return resp;
    }
};