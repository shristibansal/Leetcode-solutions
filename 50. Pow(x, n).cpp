//O(n)
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0)
        {
            x=1/x;
            n=n*-1;
        }
        double a=x;
        for(long long int i=2;i<=n;i++)
        {
            a=a*x;
        }
        return a;
    }
};