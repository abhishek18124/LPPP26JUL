#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> arr = {10, 20, 30, 40, 50, 60};
	int n = arr.size();
	int t = 60;

	int cnt = 0;

	// time : O(n^2)
	// space: O(1)

	for (int i = 0; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			int pairSum = arr[i] + arr[j];
			if (pairSum == t) {
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}