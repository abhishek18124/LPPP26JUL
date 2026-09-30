#include<iostream>

using namespace std;

// time : O(n)
// space: O(n) due to fn call stack

void f(int n) {

	// base case

	if(n == 0) {
		return;
	}

	// recursive case

	// f(n) : print nos. from 1 to n in inc. order

	// 1. ask your friend to print nos. from 1 to n-1 in inc. order

	f(n-1);

	// 2. print n

	cout << n << " ";

}

int main() {

	int n = 5;

	f(n);

	return 0;
}