class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> check = new HashMap<Integer, Integer>();
        int remainder = 0;
        int[] resp = new int[2];
        for (int i = 0; i < nums.length; i++) {
            remainder = target - nums[i];
            if (check.containsKey(remainder)) {
                resp[0] = i;
                resp[1] = check.get(remainder);
                break;
            }
            else {
                check.put(nums[i],i);
            }
        }
        return resp;
    }
}