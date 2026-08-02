#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cin >> n;

	int ans = 0; // to store the unique number

	// time : O(n)
	// space: O(1)

	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		ans = ans ^ x;
	}

	cout << ans << endl;

	return 0;
}