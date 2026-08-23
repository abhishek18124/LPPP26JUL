#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main() {

	vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = arr.size();

	// time : O(n^3)

	int maxSoFar = INT_MIN; // to track maximum subarray sum
	int s, e; // to track the starting and ending points of the subarray with maximum sum
	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {

			// find the sum of the subarray that starts
			// at the ith index and ends at the jth index

			int sum = 0; // to track the sum of the subarray that starts at the ith index and ends at the jth index

			for (int k = i; k <= j; k++) {
				sum += arr[k];
			}

			// maxSoFar = max(maxSoFar, sum);
			if (sum > maxSoFar) {
				maxSoFar = sum;
				s = i;
				e = j;
			}

		}

	}

	cout << maxSoFar << endl;

	// cout << s << " " << e << endl;

	for (int i = s; i <= e; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;


	return 0;
}