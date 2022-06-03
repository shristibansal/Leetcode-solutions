class Solution {
public:
    bool digitSum(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += n % 10;
            n /= 10;
        }
        return ((sum%2 == 0)?true: false);
    }
    int countEven(int num) {
        if(num == 0 || num == 1)
            return 0;
        int c = 1;
        for(int i = 3; i <= num; i++)
        {
            if(digitSum(i))
                c++;
        }
        return c;
    }
};