/*

https://leetcode.com/problems/container-with-most-water/

*/

class Solution {
public:

	// time : O(n^2)

	int maxArea(vector<int>& arr) {
		int n = (int)arr.size();
		int maxSoFar = 0; // INT_MIN
		for (int i = 0; i <= n - 2; i++) {
			for (int j = i + 1; j <= n - 1; j++) {
				int w = j - i;
				int h = min(arr[i], arr[j]);
				int a = w * h;
				maxSoFar = max(maxSoFar, a);
			}
		}
		return maxSoFar;
	}
};