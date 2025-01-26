class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector <int> resp;
        for (int i = 0; i < nums.size(); i++) {
            resp.insert(resp.begin()+index[i],nums[i]);
        }
        return resp;
    }
};