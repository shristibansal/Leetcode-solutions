class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
    int m = abs(nums[0] - 0);
    int a = 0;
    for(int i = 1; i < nums.size(); i++)
    {
        if(m == abs(nums[i] - 0 ))
           a = (nums[i] > nums[a])?i:a;
        else if(m > abs(nums[i] - 0 ))
        {   
            m = abs(nums[i] - 0);
            a=i;
        }
    }
        return nums[a];
        
    }
};