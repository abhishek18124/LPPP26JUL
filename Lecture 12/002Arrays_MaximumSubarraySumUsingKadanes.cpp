#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main() {

	vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = arr.size();

	// time : O(n)
	// space: O(n) due to x[]

	vector<int> x(n);
	x[0] = arr[0];

	int maxSoFar = x[0];

	for (int i = 1; i < n; i++) {
		x[i] = max(x[i - 1] + arr[i], arr[i]);
		maxSoFar = max(maxSoFar, x[i]);
	}

	cout << maxSoFar << endl;

	return 0;
}