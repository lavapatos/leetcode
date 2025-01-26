class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector <int> resp;

        for (auto n : nums) {
            if (n % 2 == 0) {resp.push_back(n);}    
        }

        for (auto n : nums) {
            if (n % 2) {resp.push_back(n);}
        }

        return resp;
        
    }
};