class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int ans = 0;

        set<char> check;

        while (r < s.size()) {
            if (check.find(s[r]) == check.end()) {
                check.insert(s[r]);
            }
            else {
                while (check.find(s[r]) != check.end()) {
                    check.erase(s[l]);
                    l++;
                }
                check.insert(s[r]);
            }
            ans = max(ans,r-l+1);
            r++;
        }

        return ans;
    }
};