class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0, actual = 1;
        for (auto s : sentences) {
            for (auto c : s) {
                if (c == ' ') {
                    actual++;
                }
            }
            if (actual > max) {max = actual;}
            actual = 1;
        }
        return max;
    }
};