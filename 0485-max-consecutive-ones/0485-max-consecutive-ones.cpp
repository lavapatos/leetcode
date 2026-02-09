class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max = -1;
        for (auto n : nums) {
            if (n != 1) {count = 0;}
            else {count++;}
            if (count > max) {max = count;}
        }
        return max;
        
    }
};