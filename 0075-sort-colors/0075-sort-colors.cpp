class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colors[3]={0};
        for (int n : nums) {colors[n]++;}
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!colors[count]) {
                while (!colors[count]) {count++;}
            }
            nums[i] = count;
            colors[count]--;
        }
    }
};