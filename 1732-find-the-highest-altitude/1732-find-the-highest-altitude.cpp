class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altura = 0;
        int max = 0;
        for (auto g : gain) {
            altura += g;
            if (altura > max) {max = altura;}
        }
        return max;
    }
};