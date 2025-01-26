class Solution {
public:
    string largestGoodInteger(string num) {
        char max = '/';
        for (int i = 0; i < num.size()-2; i++) {
            if (num[i] > max && num[i] == num[i+1] && num[i] == num[i+2]) {max = num[i];}
        }
        string resp;
        if (max == '/') {return "";}
        for (int i = 0; i < 3; i++) {
            resp += max;
        }
        return resp;
    }
};