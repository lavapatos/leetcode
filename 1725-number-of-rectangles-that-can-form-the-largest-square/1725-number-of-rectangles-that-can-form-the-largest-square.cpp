class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max = 0, count = 0;
        for (auto r : rectangles) {
            if (max < min(r[0],r[1])) {max = min(r[0],r[1]);}
        }
        for (auto r : rectangles) {
            if (max == min(r[0],r[1])) {count++;}
        }
        return count;
    }
};