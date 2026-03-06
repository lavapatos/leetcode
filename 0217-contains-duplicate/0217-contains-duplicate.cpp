class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> check;
        for (auto n : nums) {
            if (check.contains(n)) {return 1;}
            else {check.insert(n);}
        }
        return 0;
    }
};