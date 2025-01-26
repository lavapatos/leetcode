class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s = 0, d = 0;
        for (auto n : nums) {
            s += n;
            while (n != 0) {
                d += n%10;
                n /= 10;
            }
        }
        return abs(s-d);  
    }
};