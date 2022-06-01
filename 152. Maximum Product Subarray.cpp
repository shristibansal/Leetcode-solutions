class Solution {
public:
   int maxProduct(vector<int>& nums) {
	int minv = 1, maxv = 1, ans = INT_MIN;
	for (int i : nums) {
		int _minv = min(i, min(minv * i, maxv * i));
		int _maxv = max(i, max(minv * i, maxv * i));
		minv = _minv, maxv = _maxv;
		ans = max(ans, maxv);
	}
	return ans;
}
};