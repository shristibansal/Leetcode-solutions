class Solution {
public:
    void nextPermutation(vector<int>& nums) {
 for(int i=nums.size()-1;i>0;i--)
 {
         swap(nums[i],nums[i-1]);
 }
    }
};