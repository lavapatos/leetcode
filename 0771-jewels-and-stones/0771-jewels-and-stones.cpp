class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int k = 0;
        unordered_set <char> *jSet = new unordered_set<char>();
        for (auto c : jewels) {jSet->insert(c);}

        for (auto s : stones) {
            if (jSet->find(s) != jSet->end()) {k++;}
        }
        return k;
    }
};