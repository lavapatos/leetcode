class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long int rev = 0, resto = 0, original = x;

        while (x != 0) {
            resto = x%10;
            rev *= 10;
            rev += resto;
            x /= 10;
        }
        return (rev == original);
    }
};