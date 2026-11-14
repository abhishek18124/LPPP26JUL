#include<iostream>

using namespace std;

int main() {

	int x = 10;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "sizeof(&x) = " << sizeof(&x) << "B" << endl << endl;

	cout << endl;

	bool y = true;
	cout << "y = " << y << endl;
	cout << "&y = " << &y << endl;
	cout << "sizeof(&y) = " << sizeof(&y) << "B" << endl << endl;

	double z = 3.14;
	cout << "z = " << z << endl;
	cout << "&z = " << &z << endl;
	cout << "sizeof(&z) = " << sizeof(&z) << endl << endl;

	char w = 'A';
	cout << "w = " << w << endl;
	cout << "&w = " << &w << endl;
	cout << "sizeof(&w) = " << sizeof(&w) << endl << endl;

	return 0;

}