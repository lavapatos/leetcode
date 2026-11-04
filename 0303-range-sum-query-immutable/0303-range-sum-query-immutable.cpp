class NumArray {
private:
    vector<int> pSum;
public:
    NumArray(vector<int>& nums) {
        pSum = nums;
        for (int i = 1; i < pSum.size(); i++) {
            pSum[i] += pSum[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return (left != 0 ? pSum[right] - pSum[left-1] : pSum[right]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */