class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> *mapa = new map<int, int>();
        vector<int> sol;

        if (nums.size() == 2) {
            sol.push_back(0);
            sol.push_back(1);
        }
        else {
            for (int i = 0; i < nums.size(); i++) {
                int resto = target - nums[i];
                if (mapa->find(resto) != mapa->end() && mapa->find(resto)->second != i) {
                    sol.push_back(i);
                    sol.push_back(mapa->find(resto)->second);
                    break;
                }
                else {
                    mapa->insert({nums[i],i});
                }
            }    
        }
        return sol;
    }
};