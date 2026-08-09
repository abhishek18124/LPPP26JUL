// 1 <= n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[100]; // based on constraints

	int n;
	cin >> n;

	// int arr[n];

	// 1. read values into the array

	// cin >> arr[0];
	// cin >> arr[1];
	// cin >> arr[2];
	// cin >> arr[3];
	// cin >> arr[4];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 2. print the values in the array

	// cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	// cout << endl;

	// 3. print the values in the array in reverse


	return 0;
}