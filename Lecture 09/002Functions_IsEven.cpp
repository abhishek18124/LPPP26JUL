#include<iostream>

using namespace std;

void isEven(int x) {

	if (x % 2 == 0) {
		cout << "even" << endl;
	} else {
		cout << "odd" << endl;
	}

	return; // optional

}

int main() {

	isEven(2);

	isEven(3);

	return 0;
}