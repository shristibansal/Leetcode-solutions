//O(n)
class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        int res = 0;
        while(n >= i)
        {
            n -= i;
            i++;
            res++;
        }
        return res;
    }
};

//O(log n)
class Solution {
public:
    int arrangeCoins(int n) {
        long s = 0, e = n, res = 0, m = 0;
        while(s<=e)
        {
            m = (s+e)/2;
            if((m*(m+1)/2) <= n)
                s = m + 1;
            else
                e = m - 1;
        }
        return (int)s-1;
    }
};