#include<iostream>

using namespace std;

int main() {

	int x = 10;

	int* xptr; // pointer declaration
	xptr = &x; // pointer assignment

	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "&x = " << &x << endl;
	cout << "sizeof(&x) = " << sizeof(&x) << "B" << endl;
	cout << "xptr = " << xptr << endl;
	cout << "sizeof(xptr) = " << sizeof(xptr) << "B" << endl;

	cout << endl;

	double z = 3.14;
	double* zptr = &z;
	cout << "z = " << z << endl;
	cout << "&z = " << &z << endl;
	cout << "sizeof(&z) = " << sizeof(&z) << endl;
	cout << "zptr = " << zptr << endl;
	cout << "sizeof(zptr) = " << sizeof(zptr) << endl << endl;

	char w = 'A';
	char* wptr = &w;
	cout << "w = " << w << endl;
	cout << "&w = " << &w << endl;
	cout << "sizeof(&w) = " << sizeof(&w) << endl;
	cout << "wptr = " << wptr << endl;
	cout << "sizeof(wptr) = " << sizeof(wptr) << endl << endl;

	return 0;

}