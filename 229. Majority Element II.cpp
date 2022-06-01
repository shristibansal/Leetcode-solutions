class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        vector<int> res;
        for(auto i: nums)
        {
            m[i]++;
        }
        for(auto i :m)
        {
            if(i.second>n/3)
                res.push_back(i.first);
        }
        return res;
    }
};