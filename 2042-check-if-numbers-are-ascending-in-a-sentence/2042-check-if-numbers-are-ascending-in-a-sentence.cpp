class Solution {
public:
    bool areNumbersAscending(string s) {
        int max = 0, actual = 0;
        for (int i = 0; i < s.size(); i++) {
            while (s[i] <= 57 && s[i] >= 48) {
                actual *= 10;
                actual += s[i] - '0';
                if (i+1 == s.size()) {break;}
                i++;
            }
            if (max < actual) {
                max = actual;
                actual = 0;
            }
            else if (actual != 0 && s[i-1] <= 57 && s[i-1] >= 48 || actual != 0 && s[i] <= 57 && s[i] >= 48) {return 0;}
        }
        return 1;
    }
};