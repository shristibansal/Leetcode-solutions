class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> res;
        if(nums.size() < 3)
           return (res);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++)
        {
            int x = i + 1;
            int y = nums.size() - 1;
            while(x < y)
            {
                if(nums[i] + nums[x] + nums[y] == 0)
                {
                    res.push_back({nums[i], nums[x], nums[y]});
                    while(x < y && nums[x] == nums[x+1])
                        x++;
                    while(x < y && nums[y] == nums[y-1])
                        y--;
                    x++;
                    y--;
                }
                else if(nums[i] + nums[x] + nums[y] < 0)
                    x++;
                else if(nums[i] + nums[x] + nums[y] > 0)
                    y--;
            }
            while(i < nums.size() - 2 && nums[i] == nums[i+1])
                i++;
        }
        return res;
    }
};