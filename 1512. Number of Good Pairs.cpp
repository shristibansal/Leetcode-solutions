class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {   
        unordered_map<int,int> s;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {

	        if (s.find(nums[i]) != s.end()){
		        count+=s[nums[i]];
                s[nums[i]]++;
             }
	        else
		        s[nums[i]]++;
        }

        return count;

         }
    };