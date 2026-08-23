#include<iostream>
#include<vector>

using namespace std;

// time : O(n^3)

void generateSubarrays(const vector<int>& arr) {

	int n = (int)arr.size();

	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {

			// generate the subarray that starts
			// at the ith index and ends at the
			// jth index

			for (int k = i; k <= j; k++) {
				cout << arr[k] << " ";
			}

			cout << endl;

		}

		cout << endl;

	}

}

int main() {

	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	generateSubarrays(arr);

	return 0;
}