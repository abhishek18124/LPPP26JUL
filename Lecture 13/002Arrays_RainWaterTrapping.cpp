
// https://leetcode.com/problems/trapping-rain-water/


class Solution {
public:
	// time : O(n^2)
	int trap(vector<int>& height) {
		int n = (int)height.size();
		int total = 0;
		for (int i = 0; i < n; i++) {
			// find the water trapped on top of the ith building

			// li = max(height[0...i])
			int li = height[i];
			for (int j = i - 1; j >= 0; j--) {
				li = max(li, height[j]);
			}

			// ri = max(height[i...n-1])
			int ri = height[i];
			for (int j = i + 1; j < n; j++) {
				ri = max(ri, height[j]);
			}

			int wi = min(li, ri) - height[i];
			total += wi;
		}
		return total;
	}
};