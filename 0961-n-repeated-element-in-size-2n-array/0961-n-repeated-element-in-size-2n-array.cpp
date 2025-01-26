class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int amount = nums.size()/2, count = 0, check = nums[0];

        for (auto n : nums) {
            if (n != check) {
                check = n;
                count = 0;
            }
            count++;
            if (amount == count) {return n;}
        }
        return 0;
    }
};