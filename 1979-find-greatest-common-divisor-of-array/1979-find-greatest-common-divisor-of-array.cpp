class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());

        if (max%min == 0) {return min;}
        for (int i = min-1; i >= 1; i--) {
            if (min%i == 0 && max%i == 0) {
                min = i;
                break;
            }
        }
        return min;
    }
};