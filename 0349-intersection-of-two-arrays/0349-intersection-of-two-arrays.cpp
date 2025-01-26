class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map <int,int> m;
        for (auto n : nums1) {
            if (m.find(n) == m.end()) {m.insert({n,0});}
        }
        for (auto n : nums2) {
            if (m.find(n) != m.end()) {
                m[n]++;
            }
        }
        vector <int> resp;
        map <int,int> :: iterator rec = m.begin();
        while (rec != m.end()) {
            if (rec->second != 0) {resp.push_back(rec->first);}
            rec++;
        }
        return resp;
    }
};