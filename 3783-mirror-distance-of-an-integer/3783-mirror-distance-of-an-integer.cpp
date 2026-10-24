class Solution {
public:
    int mirrorDistance(int n) {
        if (log10(n) < 1) {return 0;}
        int og = n;
        int rev = 0;
        while (n > 0) {
            rev *=10;
            rev += n%10;
            n /= 10;
        }
        
        return abs(og - rev);
    }
};