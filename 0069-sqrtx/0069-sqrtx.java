class Solution {
    public int mySqrt(int x) {
        int ans = 0;
        for (int i = 1; i <= x; i += 2) {
            x -= i;
            if (x < 0) {break;}
            ans++;
        }
        return ans;
    }
}