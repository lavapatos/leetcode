class Solution {
public:
    int myAtoi(string s) {
        if (s[0] > 57 || s[0] < 48 && s[0] != ' ' && s[0] != '-' && s[0] != '+') {return 0;}
        long long resp = 0;
        int sign = 1;
        bool yafue = true;
        for (int i = 0; i < s.size(); i++) {
            while ((s[i] == ' ' || s[i] == '-' || s[i] == '+') && yafue) {
                if (s[i] == '-') {
                    if (i != 0 && s[i-1] != ' ') {return 0;}
                    sign = -1;
                    i++;
                    break;
                }
                if (s[i] == '+') {
                    i++;
                    break;
                }
                i++;
            }
            yafue = false;
            if (s[i] > 57 || s[i] < 48) {break;}
            if (s[i] <= 57 && s[i] >= 48) {
                resp *= 10;
                resp += s[i] - '0';
            }
            if (resp >= INT_MAX) {
                if (sign == -1 && resp == INT_MAX) {return INT_MIN + 1;}
                else if (sign == -1 && resp > INT_MAX) {return INT_MIN;}
                return INT_MAX;
            }
        }
        return (resp*sign);
    }
};