#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	// if (n == 0) {
	// 	cout << 0;
	// } else if (n == 1) {
	// 	cout << 1;
	// } else {
	// 	// n >= 2
	// 	...
	// }

	if (n == 0 or n == 1) {
		cout << n;
	} else {
		// time : O(n)
		// space: O(1) // aux. space is independent of input n

		// n >= 2
		int a = 0; // 0th fib. no.
		int b = 1; // 1st fib. no.
		int i = 1;
		while (i <= n - 1) {
			int c = a + b;
			a = b;
			b = c;
			i = i + 1;
		}
		cout << b;
	}

	return 0;
}