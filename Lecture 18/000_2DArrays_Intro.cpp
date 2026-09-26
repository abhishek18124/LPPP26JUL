#include<iostream>

using namespace std;

int main() {

	int arr[3][4];

	cout << sizeof(arr) << " B" << endl;

	char brr[10][20];

	cout << sizeof(brr) << " B" << endl;

	double crr[5][10];

	cout << sizeof(crr) << " B" << endl;

	return 0;
}