class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) {return 0;}
        int check = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                check += i + num/i;
            }
            if (check > num) {return 0;}
        }
        return (check == num);
    }
};