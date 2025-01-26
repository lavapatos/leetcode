class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() > 1) {
            int count = 0, i = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != 0) {
                    nums[count] = nums[i];
                    count++;
                }
            }

            while (count < nums.size()) {
                nums[count++] = 0;
            }
        }
    }
};