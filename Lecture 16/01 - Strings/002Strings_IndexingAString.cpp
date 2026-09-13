#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "hello";

	// cout << s[0] << endl;
	// cout << s[1] << endl;
	// cout << s[2] << endl;
	// cout << s[3] << endl;
	// cout << s[4] << endl;

	for (int i = 0; s[i] != '\0'; i++) {
		cout << s[i] << endl;
	}

	cout << endl;

	int n = (int)s.size(); // s.length()

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}

	cout << endl;

	for (char ch : s) {
		cout << ch << endl;
	}

	cout << endl;

	return 0;
}