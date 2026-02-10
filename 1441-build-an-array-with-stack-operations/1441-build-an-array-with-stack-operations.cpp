class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int num = 1;
        for (auto t : target) {
            while (num < t) {
                ans.push_back("Push");
                ans.push_back("Pop");
                num++;
            }
            ans.push_back("Push");
            num++;
        }
        return ans;   
    }
};