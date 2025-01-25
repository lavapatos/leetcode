class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a = 0, m = 0, d = nums.size() - 1;
        while (m <= d) {
            if (nums[m] == 0) {
                int temp = nums[a];
                nums[a] = nums[m];
                nums[m] = temp;
                m++;
                a++;
            }
            else if (nums[m] == 1) {
                m++;
            }
            else {
                int temp = nums[d];
                nums[d] = nums[m];
                nums[m] = temp;
                d--;
            }
        }
    }
};