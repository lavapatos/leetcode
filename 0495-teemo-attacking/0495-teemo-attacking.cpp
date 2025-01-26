class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int time = timeSeries[0];
        int count = 0;
        for (auto t : timeSeries) {
            if (t - time > duration) {count += duration;}
            else {count += t - time;}
            time = t;
        }
        return count + duration;
    }
};