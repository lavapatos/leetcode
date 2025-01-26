class Solution {
public:
    bool judgeCircle(string moves) {
        int pos [2] = {0,0};
        for (auto c : moves) {
            if (c == 'U') {pos[1]++;}
            if (c == 'D') {pos[1]--;}
            if (c == 'L') {pos[0]--;}
            if (c == 'R') {pos[0]++;}
        }
        return (!pos[0] && !pos[1]);
    }
};