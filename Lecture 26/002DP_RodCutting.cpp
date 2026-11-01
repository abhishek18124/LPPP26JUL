/*



Given a rod of length 'n' along with prices of its pieces of different lengths, design an algorithm to
compute the maximum profit we can make by cutting the rod and a selling its pieces.

Example :

	Input : n = 8
	        length : [1,  2,  3,  4,  5,  6,  7,  8]
	        prices : [1,  5,  8,  9,  10, 17, 17, 20]
	Output : 22

	Input : n = 8
	        length : [1,  2,  3,  4,  5,  6,  7,  8]
	        prices : [3,  5,  8,  9, 10, 17, 17, 20]
	Output : 24


*/


#include<iostream>
#include<vector>
#include<climits>

using namespace std;

// time : O(n^n)
// space: O(n) due to fn call stack

int cnt1 = 0;

int f(int n, const vector<int>& p) {

	cnt1++;

	// base case

	if (n == 0) {

		// f(0) = find the max. profit given a rod of length 0

		return 0;

	}

	// recursive case

	// f(n) = find the max. profit given a rod of length n

	// decide the len of the next cut

	int maxSoFar = 0;

	for (int j = 1; j <= n; j++) {
		maxSoFar = max(maxSoFar, p[j - 1] + f(n - j, p));
	}

	return maxSoFar;

}

// time : O(n^2)
// space: n due to fn call stack + n due to dp[] ~ O(n)

int cnt2 = 0;

int fTopdown(int n, const vector<int>& p, vector<int>& dp) {

	cnt2++;

	// lookup

	if (dp[n] != -1) {
		return dp[n];
	}

	// base case

	if (n == 0) {

		// f(0) = find the max. profit given a rod of length 0

		return dp[n] = 0;

	}

	// recursive case

	// f(n) = find the max. profit given a rod of length n

	// decide the len of the next cut

	int maxSoFar = 0;

	for (int j = 1; j <= n; j++) {
		maxSoFar = max(maxSoFar, p[j - 1] + fTopdown(n - j, p, dp));
	}

	return dp[n] = maxSoFar;

}

int main() {

	vector<int> p = {1, 5, 8, 9, 10, 17, 17, 20};
	int n = p.size();

	cout << f(n, p) << endl;

	vector<int> dp(n + 1, -1);

	cout << fTopdown(n, p, dp) << endl;

	cout << cnt1 << endl;
	cout << cnt2 << endl;

	return 0;
}