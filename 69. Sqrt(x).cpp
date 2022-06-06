class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1)
            return x;
        int s = 0, e = x; 
        long int mid, res;
        while(s <= e)
        {
            mid = (s + e) / 2;
            if(mid * mid <= x)
            {
                res = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        return int(res);
    }
};