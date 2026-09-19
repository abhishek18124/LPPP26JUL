#include<iostream>
#include<vector>

using namespace std;

int f(const vector<int>& arr, int n, int t) {

	int s = 0;
	int e = n - 1;

	int ans = -1;

	while (s <= e) {

		int m = s + (e - s) / 2;
		if (arr[m] == t) {
			ans = m;
			e = m - 1;
		} else if (t > arr[m]) {
			s = m + 1;
		} else {
			// t < arr[m]
			e = m - 1;
		}

	}

	return ans;

}

int main() {

	int n; cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int t; cin >> t;

	cout << f(arr, n, t) << endl;

	return 0;
}