class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.size()-1;
        while (i != j && s[i] == s[j]) {
            char check = s[i];
            while (s[i] == check) {
                i++;
                if (i > j) {return 0;}
            }
            while (s[j] == check) {
                j--;
                if (i > j) {return 0;}
            }
            
        }
        return (j - i + 1);
    }
};