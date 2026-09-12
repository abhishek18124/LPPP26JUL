// n <= 100

#include<iostream>

using namespace std;

int main() {

	char str[101]; // based on constraints

	// cin >> str; // when you read a string into a char[] using cin >> then '\0' is added automatically

	cin.getline(str, 101);

	// cin.getline(str, 101, '$');

	cin.getline(str, 5, '$');

	cout << str << endl;

	for (int i = 0; str[i] != '\0'; i++) {
		cout << str[i] << endl;
	}

	return 0;
}