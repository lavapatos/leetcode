class Solution {
    public void moveZeroes(int[] nums) {
        if (nums.length > 1) {
            int i = 0;
            int count = 0;
            while (i < nums.length) {
                if (nums[i] != 0) {
                    nums[count] = nums[i];
                    count++;
                }
                i++;
            }
            while (count < nums.length) {nums[count++] = 0;}
        }
    }
}