class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1 && s[0] == 32) {return 1;}
        string check;
        for (auto c : s) {
            if (c >= 65 && c <= 90) {check += c + 32;}
            if (c >= 48 && c <= 57 || c >= 97 && c <= 122) {check += c;}
        }
        int j = check.size()-1;
        for (int i = 0; i < check.size()/2; i++) {
            if (check[i] != check[j]) {return 0;}
            j--;
        }
        return 1;
    }
};