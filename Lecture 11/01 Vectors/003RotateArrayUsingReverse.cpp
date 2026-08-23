class Solution {
public:
	void rotate(vector<int>& arr, int k) {

		int n = arr.size();
		k = k % n;

		// 1. reverse the entire array i.e. arr[0...n-1]

		reverse(arr.begin(), arr.end());

		// 2. reverse the 1st k terms i.e. arr[0...k-1]

		reverse(arr.begin(), arr.begin() + k);

		// 3. reverse the last n-k terms i.e. arr[k...n-1]

		reverse(arr.begin() + k, arr.end());

	}
};