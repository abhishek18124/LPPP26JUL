#include<iostream>

using namespace std;

int X[] = {10, 20, 30, 40, 50};
int n = 5;

bool f(int i) {

	//  base case
	if (i == n - 1) {
		// f(n-1) : check if the X[n-1...n-1] is sorted or not
		return true;
	}

	// recursive case

	// f(i) : check if X[i...n-1] is sorted or not

	return X[i] < X[i + 1] and f(i + 1);

}

int main() {

	f(0) ? cout << "sorted" << endl : cout << "not sorted" << endl;

	return 0;
}