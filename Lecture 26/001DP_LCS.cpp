/*

Given two strings s1 and s2, return the length of their longest common subsequence.
If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters
(can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

Example :

	Input : s1 = "ATGC", s2 = "AGCT"
	Output: 3
	Explanation : "AGC" is the LCS between s1 and s2

	Input : s1 = "AGGTAB", s2 = "GXTXAYB"
	Output: 4
	Explanation : “GTAB” is the LCS between s1 and s2

*/

#include<iostream>
#include<vector>

using namespace std;

int cnt1 = 0;

int f(const string& s1, const string& s2, int m, int n, int i, int j) {

	cnt1++;

	// base case

	if (i == m || j == n) {

		// f(m, j) = find the length of the lcs b/w s1[m...m-1] i.e. "" and s2[j...n-1]

		// f(i, n) = find the length of the lcs b/w s1[i...m-1] and s2[n...n-1] i.e. ""

		return 0;
	}

	// recursive case

	// f(i, j) = find the length of the lcs b/w s1[i...m-1] and s2[j...n-1]

	if (s1[i] == s2[j]) {
		return 1 + f(s1, s2, m, n, i + 1, j + 1);
	} else {
		return max(f(s1, s2, m, n, i, j + 1), f(s1, s2, m, n, i + 1, j));
	}

}

int cnt2 = 0;

// time : O(mn)
// space: m+n due to fn call stack + mn due to dp[][] ~ O(mn)

int fTopdown(const string& s1, const string& s2,
             int m, int n, int i, int j,
             vector<vector<int>>& dp) {

	cnt2++;

	// lookup
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	// base case

	if (i == m || j == n) {

		// f(m, j) = find the length of the lcs b/w s1[m...m-1] i.e. "" and s2[j...n-1]

		// f(i, n) = find the length of the lcs b/w s1[i...m-1] and s2[n...n-1] i.e. ""

		return dp[i][j] = 0;
	}

	// recursive case

	// f(i, j) = find the length of the lcs b/w s1[i...m-1] and s2[j...n-1]

	if (s1[i] == s2[j]) {
		return dp[i][j] = 1 + fTopdown(s1, s2, m, n, i + 1, j + 1, dp);
	} else {
		return dp[i][j] = max(fTopdown(s1, s2, m, n, i, j + 1, dp), fTopdown(s1, s2, m, n, i + 1, j, dp));
	}

}

// time : O(mn)
// space: O(mn)

int fBottomUp(const string& s1, const string& s2, int m, int n) {

	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

	// 0 init make sure that mth row and nth coln which corresponds to the base is automatically filled with zeros

	for (int i = m - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {
			if (s1[i] == s2[j]) {
				dp[i][j] = 1 + dp[i + 1][j + 1];
			} else {
				dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]);
			}
		}
	}

	// for (int i = 0; i <= m; i++) {
	// 	for (int j = 0; j <= n; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	string ans = "";

	int x = 0;
	int y = 0;

	while (!(x == m || y == n)) {

		if (s1[x] == s2[y]) {
			ans += s1[x]; // ans += s2[y]
			x++; y++;
		} else if (dp[x][y + 1] > dp[x + 1][y]) {
			y++;
		} else {
			x++;
		}

	}

	cout << ans << endl;

	return dp[0][0]; // at the 0,0th index of dp[][] we store f(0, 0)

}

// time : O(mn)
// space: O(n)

int fBottomUpSpaceOptimised(const string& s1, const string& s2, int m, int n) {

	vector<int> nxt(n + 1, 0); // at this point of time nxt[] store the mth row of the dp[][]
	vector<int> cur(n + 1, 0); // 0 init of cur[] ensures nth column is always zero

	for (int i = m - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {
			if (s1[i] == s2[j]) {
				cur[j] = 1 + nxt[j + 1];
			} else {
				cur[j] = max(cur[j + 1], nxt[j]);
			}
		}
		// nxt = cur;
		swap(nxt, cur);
	}

	return nxt[0]; // at this point of time nxt[] stores the 0th row of dp[][]

}

int main() {

	string s1("ATGC");
	string s2("AGCT");

	int m = s1.size();
	int n = s2.size();

	cout << f(s1, s2, m, n, 0, 0) << endl;

	vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

	cout << fTopdown(s1, s2, m, n, 0, 0, dp) << endl;

	cout << cnt1 << endl;

	cout << cnt2 << endl;

	cout << fBottomUp(s1, s2, m, n) << endl;

	cout << fBottomUpSpaceOptimised(s1, s2, m, n) << endl;

	return 0;
}