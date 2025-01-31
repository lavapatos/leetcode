class Solution {
public:
    int countDigits(int num) {
        int temp = num, count = 0;
        while (temp) {
            if (num % (temp%10) == 0) {count++;}
            temp /= 10;
        }
        return count;
    }
};