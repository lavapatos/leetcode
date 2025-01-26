class Solution {
public:
    string sortVowels(string s) {
        vector <int> v_nums;
        for (auto c : s) {
            if (c-'0'==17||c-'0'==21||c-'0'==25||c-'0'==31||c-'0'==37||
            c-'0'==49||c-'0'==53||c-'0'==57||c-'0'==63||c-'0'==69) {
                v_nums.push_back(c-'0');
            }
        }
        sort(v_nums.begin(),v_nums.end());
        int k = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]-'0'==17||s[i]-'0'==21||s[i]-'0'==25||s[i]-'0'==31||s[i]-'0'==37||
            s[i]-'0'==49||s[i]-'0'==53||s[i]-'0'==57||s[i]-'0'==63||s[i]-'0'==69) {
                s[i] = v_nums[k]+'0';
                k++;
            }
        }
        return s;
    }
};