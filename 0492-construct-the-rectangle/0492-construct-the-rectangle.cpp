class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector <int> resp;
        for (int i = sqrt(area); i >= 1; i--) {
            if (area % i == 0) {
                resp.push_back(area / i);
                resp.push_back(i);
                break;
            }
        }
        return resp;
    }
};