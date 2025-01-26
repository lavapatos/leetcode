class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int mitad = nums.size()/2, i, j = nums.size();
        vector<int> copia = nums;
        for (i = 0; i < nums.size()-1; i+=2) {
            nums[i] = copia[i/2];
            nums[i+1] = copia[i + n - (i/2)];
        }
        return nums;
    }
};