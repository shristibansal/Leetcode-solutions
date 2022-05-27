//1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
        int n = nums.size();
        int i=0, j=0;
        while(i < n && j < n)
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin() + i);
                nums.push_back(0);                  
                j++;
            }
            else
                i++;
        }
    }
};

//2
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
        int zeroCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zeroCount++;
            }
        int l=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=0) 
                {
                nums[l]=nums[j];
                l++;
            }
            
        }
        
        for(int k=0;k<zeroCount;k++){
            nums[n-1-k]=0;
        }
    }
};
