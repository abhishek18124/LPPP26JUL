/*

Given n wines in a row, with integers denoting the cost of each wine respectively. Each year
you can sell the first or the last wine in the row. However, the price of wines increases
over time.

Let the initial prices of the wines be [p_1, p_2, ... , p_n]. In the yth year, the profit
from the kth wine will be y*p_k.

Find the maximum profit from all the wines.

Example :
	Input : prices[] = {2, 3, 5, 1, 4}
	Ouptut: 50

*/

#include<iostream>
#include<vector>

using namespace std;

// time : O(2^n)
// space: O(n) due to fn call stack

int f(const vector<int>& p, int i, int j, int y) {

	// base case

	if (i == j) { // y == n
		return y * p[i];
	}

	// recursive case

	// f(i, j, y) = find the maximum profit from wines[i...j] starting from year y

	// decide for the yth year

	// option 1 : sell the ith bottle

	// option 2 : sell the jth bottle

	return max(y * p[i] + f(p, i + 1, j, y + 1),
	           y * p[j] + f(p, i, j - 1, y + 1));

}

int cnt1 = 0;

int fStateOptimised(const vector<int>& p, int i, int j) {

	cnt1++;

	int n = (int)p.size();
	int y = n - j + i;

	// base case

	if (i == j) { // y == n
		return y * p[i];
	}

	// recursive case

	// f(i, j, y) = find the maximum profit from wines[i...j] starting from year y

	// decide for the yth year

	// option 1 : sell the ith bottle

	// option 2 : sell the jth bottle

	return max(y * p[i] + fStateOptimised(p, i + 1, j),
	           y * p[j] + fStateOptimised(p, i, j - 1));

}

// time : O(n^2)
// space: n due to fn call stack + n^2 due to dp[][] ~ O(n^2)

int cnt2 = 0;

int fTopdown(const vector<int>& p, int i, int j, vector<vector<int>>& dp) {

	cnt2++;

	// lookup
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	int n = (int)p.size();
	int y = n - j + i;

	// base case

	if (i == j) { // y == n
		return dp[i][j] = y * p[i];
	}

	// recursive case

	// f(i, j, y) = find the maximum profit from wines[i...j] starting from year y

	// decide for the yth year

	// option 1 : sell the ith bottle

	// option 2 : sell the jth bottle

	return dp[i][j] = max(y * p[i] + fTopdown(p, i + 1, j, dp),
	                      y * p[j] + fTopdown(p, i, j - 1, dp));

}

int main() {

	vector<int> p = {2, 3, 5, 1, 4};
	int n = (int)p.size();

	cout << f(p, 0, n - 1, 1) << endl;
	cout << fStateOptimised(p, 0, n - 1) << endl;

	vector<vector<int>> dp(n, vector<int>(n, -1));

	cout << fTopdown(p, 0, n - 1, dp) << endl;

	cout << cnt1 << endl;
	cout << cnt2 << endl;

	return 0;
}