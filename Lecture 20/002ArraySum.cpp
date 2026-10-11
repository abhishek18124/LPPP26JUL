#include<iostream>

using namespace std;

int X[] = {10, 20, 30, 40, 50};
int n = 5;

int f(int i) {

	// base case

	// if (i == n - 1) {

	// 	// f(n-1) : find the sum of X[n-1...n-1]

	// 	return X[n - 1];

	// }

	if (i == n) {

		// f(n) : find the sum of X[n...n-1] = {}

		return 0;

	}

	// recursive case

	// f(i) : find the sum of X[i...n-1]

	// 1. ask your friend to find the sum of X[i+1...n-1]

	int A = f(i + 1);

	// 2. use the answer from your friend to solve the org. prob.

	return X[i] + A;

}


int main() {

	cout << f(0) << endl;

	return 0;
}