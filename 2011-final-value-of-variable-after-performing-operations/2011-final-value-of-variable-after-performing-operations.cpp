class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        vector <int> op;
        for (auto s : operations) {
            if (s == "++X" || s== "X++") {op.push_back(1);}
            else {op.push_back(-1);}
        }
        for (auto n : op) {
            switch (n) {
                case 1:
                    x++;
                    break;
                case -1:
                    x--;
                    break;
                default:
                    break;
            }
        }
        return x;
        
    }
};