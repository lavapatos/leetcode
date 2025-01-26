class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int min = 2000;
        vector <string> r;
        map <string, int> m;
        for (int i = 0; i < list1.size(); i++) {
            m[list1[i]] = i;
        }
        map <string, int> m2;
        for (int i = 0; i < list2.size(); i++) {
            if (m.find(list2[i]) != m.end() && m.find(list2[i])->second + i <= min) {
                m2[list2[i]] = m.find(list2[i])->second + i;
                min = m.find(list2[i])->second + i;
            }
        }
        for (auto p : m2) {
            if (p.second == min) {
                r.push_back(p.first);                
            }
        }
        return r;
    }
};