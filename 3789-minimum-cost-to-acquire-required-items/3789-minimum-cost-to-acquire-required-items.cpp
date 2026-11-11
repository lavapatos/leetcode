class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long n1 = need1;
        long long n2 = need2;

        long long both = max(n1, n2) * costBoth;
        long long separated = n1*cost1 + n2*cost2;
        long long excess = min(n1,n2)*costBoth + (need1-min(n1,n2))*cost1 + (n2-min(n1,n2))*cost2;

        return min(both,min(separated,excess));
    }
};