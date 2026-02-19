class Solution {
public:
    bool hasAlternatingBits(int n) {
        while (n != 0) {
            int lastbit = n & 1;
            n = n>>1;
            int secondtolast = n & 1;
            if (lastbit^secondtolast == 0) {return false;}
        }
        return true;
    }
};