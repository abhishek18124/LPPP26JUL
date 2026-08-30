/*

e.g.

input
9
1 0 3 2 3 1 2 0 2
3

output
0 0 1 1 2 2 2 3 3

*/

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k; cin >> k;

	// 1. build a freqMap

	vector<int> freqMap(k + 1, 0);
	for (int i = 0; i < n; i++) {
		int x = arr[i];
		freqMap[x]++;
		// freqMap[arr[i]]++;
	}

	// for (int i = 0; i <= k; i++) {
	// 	cout << "freq[" << i << "] = " << freqMap[i] << endl;
	// }

	// 2. use the freqMap to build the sorted array

	for (int i = 0; i <= k; i++) {

		// print i freqMap[i] times

		for (int j = 1; j <= freqMap[i]; j++) {
			cout << i << " ";
		}

	}

	// time : n for building freqMap + (k + n) for constructing sorted array from freqMap
	// therefore time = 2n + k ~ O(n+k)
	// space : O(k) due to freqMap

	return 0;
}