class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> check = nums1;
        for (auto n : nums2) {
            check.push_back(n);
        }
        sort(check.begin(), check.end());
        if (check.size() % 2 == 0) {
            return (1.0*check[(check.size()-1)/2] + 1.0*check[check.size()/2])/2;
        }
        return check[check.size()/2];
    }
};