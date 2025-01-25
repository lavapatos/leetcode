class Solution {
public:
    int mySqrt(int x) {
        int resp;
        if (x < 2) {return x;}
        for (long long i = 1 ; i*i <= x; i++) {
            resp = i;
        }
        return resp;
    }
};