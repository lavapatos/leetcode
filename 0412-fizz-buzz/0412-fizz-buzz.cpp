class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> resps;
        for (int i = 1; i <= n; i++) {
            string resp;
            if (i % 3 == 0) {resp += "Fizz";}
            if (i % 5 == 0) {resp += "Buzz";}
            if (i%5 != 0 && i%3 != 0) {resp += to_string(i);}
            resps.push_back(resp);
        }
        return resps;
    }
};