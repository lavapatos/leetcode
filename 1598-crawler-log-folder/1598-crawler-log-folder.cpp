class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for (auto s : logs) {
            if (s[1] == '.' && count != 0) {count--;}
            else if (s[0] != '.') {count++;}
        }
        return count;
    }
};