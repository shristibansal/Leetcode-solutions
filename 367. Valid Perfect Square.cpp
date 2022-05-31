class Solution {
public:
    bool isPerfectSquare(int num) {
        long s = 0, e = num, mid =0;
        while(s <= e)
        {
            mid = (s + e)/2;
            if(mid * mid == num)
                return true;
            else if(mid * mid < num)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return false;
    }
};