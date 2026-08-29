#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main() {

	vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = arr.size();

	vector<int> pSum(n);
	pSum[0] = arr[0];

	for (int i = 1; i <= n - 1; i++) {
		pSum[i] = pSum[i - 1] + arr[i];
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << pSum[i] << " ";
	// }

	// cout << endl;

	int maxSoFar = INT_MIN;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			// find the sum of the subarray that starts
			// at the ith index and ends at the jth index
			// using pSum[]
			int sum = (i == 0) ? pSum[j] : pSum[j] - pSum[i - 1];
			maxSoFar = max(maxSoFar, sum);

		}
	}

	cout << maxSoFar;

	// time : n due to pSum[] precomputation + n^2 ~ O(n^2)
	// space: n due to pSum[] ~ O(n)

	return 0;
}