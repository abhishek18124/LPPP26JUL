#include<iostream>

using namespace std;

bool isEven(int x) {
	// if (x % 2 == 0) {
	// 	return true;
	// } else {
	// 	return false;
	// }

	// if(x%2 == 0) {
	// 	return true;
	// }

	// return false;

	// return x % 2 == 0 ? true : false;

	return x % 2 == 0; // from a fn we can return an expression since an expression is something that evaluates to a single value
}

int main() {

	bool ans = isEven(2);
	cout << ans << endl;

	cout << isEven(3) << endl;

	// if a fn call returns a value, you can treat
	// that fn call as an expression

	isEven(4) ? cout << "even" << endl : cout << "odd" << endl;
	isEven(5) ? cout << "even" << endl : cout << "odd" << endl;

	if (isEven(6)) {
		cout << "even" << endl;
	} else {
		cout << "odd" << endl;
	}

	if (isEven(7)) {
		cout << "even" << endl;
	} else {
		cout << "odd" << endl;
	}

	return 0;
}