class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }

        for (int n : nums) {
            if (n != 0) {
                nums[count++] = n;
            }
        }

        while (count < nums.size()) {
            nums[count++] = 0;
        }

        return nums;
    }
};