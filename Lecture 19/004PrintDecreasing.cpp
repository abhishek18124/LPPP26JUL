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

	// f(n) : print nos. from n to 1 in dec. order

	// 1. print n

	cout << n << " ";

	// 2. ask your friend to print nos. from n-1 to 1 in dec. order

	f(n-1);

}


int main() {

	int n = 5;

	f(n);

	return 0;
}