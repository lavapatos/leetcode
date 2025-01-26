class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max =  *max_element(candies.begin(), candies.end());
        vector <bool> resp;
        for (auto n : candies) {
            if (n + extraCandies >= max) {resp.push_back(1);}
            else {resp.push_back(0);}
        }
        return resp;
    }
};