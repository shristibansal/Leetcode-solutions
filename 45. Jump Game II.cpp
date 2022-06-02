class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<=1)
        {
            return 0;
        }
       if(nums[0] > nums.size()-1)
       {
           return 1;
       }
        int m=0;
        int count =0;
        int x = nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            m = max(i+nums[i],m);
            if(i == x)
            {
                count +=1;
                x = m;
                if(x>nums.size()-1)
                {
                    return count+1;
                }
            }
        }
        return count+1;
    }
};