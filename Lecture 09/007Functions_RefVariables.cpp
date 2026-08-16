#include<iostream>

using namespace std;


int main() {

	int x = 10;
	int& y = x; // y is a reference variable for x i.e. y is a new name of x

	y++;

	cout << x << endl;
	cout << y << endl;

	return 0;
}