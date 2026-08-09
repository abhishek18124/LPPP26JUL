#include<iostream>

using namespace std;

int main() {

	int arr[100]; // based on constraints

	int n;
	cin >> n;

	int t;
	cin >> t;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Linear Search
	// time : O(n)

	int i;
	bool flag = false; // assume target is not present in the arr[]

	for (i = 0; i < n; i++) {
		if (arr[i] == t) {
			// we've found the 1st occurrence of t at index i
			cout << i << endl;
			flag = true;
		}
	}

	if (flag == false) {
		// target is not present in arr[]
		cout << -1;
	}

	return 0;
}