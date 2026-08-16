#include<iostream>

using namespace std;

// void incr(int a) { // here we are passing arg by value therefore any changes done to the param won't be reflected in the arg since param is a copy of the arg
// 	a++;
// }

// int main() {

// 	int a = 10;

// 	incr(a);

// 	cout << a << endl;

// 	return 0;
// }

int incr(int a) {
	a++;
	return a;
}

int main() {

	int a = 10;

	a = incr(a);

	cout << a << endl;

	return 0;
}