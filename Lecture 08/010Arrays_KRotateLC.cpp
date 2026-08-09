class Solution {
public:
	void rotate(vector<int>& arr, int k) {

		int n = arr.size();
		k = k % n;

		// 1. reverse the entire array i.e. arr[0...n-1]

		int i = 0;
		int j = n - 1;

		while (i < j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}

		// 2. reverse the 1st k terms i.e. arr[0...k-1]

		i = 0;
		j = k - 1;

		while (i < j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}

		// 3. reverse the last n-k terms i.e. arr[k...n-1]

		i = k;
		j = n - 1;

		while (i < j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
};