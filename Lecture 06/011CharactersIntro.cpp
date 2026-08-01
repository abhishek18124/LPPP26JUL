#include<iostream>

using namespace std;

int main() {

	char ch = 'A';

	cout << ch << endl;
	cout << (int)ch << endl;

	ch = 'b';

	cout << ch << endl;
	cout << (int)ch << endl;

	ch = '3';

	cout << ch << endl;
	cout << (int)ch << endl;

	ch = 'a';

	int x = ch; // implicit type-casting

	cout << x << endl;

	return 0;
}