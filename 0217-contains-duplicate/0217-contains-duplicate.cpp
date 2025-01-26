class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() == 1) {return false;}
        sort(nums.begin(), nums.end());
        int quieto = 0, compara = 1;
        while (compara < nums.size()) {
            if (nums[quieto++] == nums[compara++]) {return true;}
        }
        return false;
    }
};