class Solution {
public:
    bool isThree(int n) {
        if (n < 4) {return 0;}
        int count = 0;
        for (int i = 2; i <= n/2; i++) {
            if (n%i == 0) {count++;}
            if (count > 2) {return 0;}
        }
        return (count == 1);
    }
};