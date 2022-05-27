class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int b = target-nums[i];
            if(m.find(b)!=m.end())
            {
                res.push_back(m[b]);
                res.push_back(i);
            }
             m[nums[i]] = i;
                
        }
        return res;
    }
};
