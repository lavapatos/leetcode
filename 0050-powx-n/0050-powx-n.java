class Solution {
    public double myPow(double x, long n) {
        if (n == 0) {return 1.0;}
        if (n == 1) {return x;}
        if (n < 0) {return myPow(1/x, -n);}
        if (n%2 == 0) {return myPow(x*x, n/2);}
        else {return x * myPow(x,n-1);}
        
    }
}