class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, m = 0;
        while(i < j)
        {
            int x = (height[i] > height[j])? height[j]: height[i];
            m = max(m, x*(j - i));
            if(height[i] > height[j])
                j--;
            else 
                i++;
        }
        return m;
        
    }
};