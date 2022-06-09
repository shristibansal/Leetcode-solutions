class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size()<2)
            return {};
      int i = 0;
        int j = numbers.size() - 1;
        while(i < j)
        {
            if(numbers[i] + numbers[j] == target)
            {
                return {i + 1, j + 1};
            }
            else if(numbers[i] + numbers[j] > target)
                j--;
            else i++;
        }
        return {}; 
    }
};