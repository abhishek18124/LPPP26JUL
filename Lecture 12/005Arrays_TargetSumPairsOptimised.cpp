#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> arr = {10, 20, 30, 40, 50, 60};
	int n = arr.size();
	int t = 60;

	int cnt = 0;

	// time : O(n)
	// space: O(1)

	int i = 0;
	int j = n - 1;

	while (i < j) {

		int pairSum = arr[i] + arr[j];
		if (pairSum  == t) {
			cnt++; i++; j--;
		} else if (pairSum > t) {
			j--;
		} else {
			// pairSum < t
			i++;
		}

	}

	cout << cnt << endl;

	return 0;
}