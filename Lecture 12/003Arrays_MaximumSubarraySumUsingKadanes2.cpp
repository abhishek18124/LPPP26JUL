#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main() {

	vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = arr.size();

	// time : O(n)
	// space: O(1)

	int x = arr[0]; // at present x represenets x[0]
	int maxSoFar = x;

	for (int i = 1; i < n; i++) {
		x = max(x + arr[i], arr[i]);
		maxSoFar = max(maxSoFar, x);
	}

	cout << maxSoFar << endl;

	return 0;
}