class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {return num;}
        if (num < 4) {return !num;}

        for (long long i = 2; i <= num/2; i++) {
            if (i*i == num) {return num;}
        }
        return 0;
    }
};