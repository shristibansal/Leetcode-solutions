class Solution {
public:
    int reverse(int x) {
        int y = 0; 
        int num = x;
        while(num)
        {
            if(y < INT_MIN/10 || y > INT_MAX/10) 
             {
                 return 0;
             }
            y = y*10 + num % 10;
            num = num / 10;
            
        }
        return int(y);
    }
};