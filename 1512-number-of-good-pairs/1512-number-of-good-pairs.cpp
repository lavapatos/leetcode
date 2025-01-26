class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        if (nums.size() == 1) {return 0;}
        int resp = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {resp++;}
            }
        }
        return resp;
    }
};