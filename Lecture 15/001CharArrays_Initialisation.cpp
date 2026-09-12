#include<iostream>

using namespace std;

int main() {

	char s1[] = {'a', 'b', 'c', 'd', 'e', '\0'};

	cout << s1 << endl;

	for (int i = 0; s1[i] != '\0'; i++) {
		cout << s1[i] << endl;
	}

	cout << endl;

	char s2[] = "hello"; // '\0' is added automatically to the end of the str when it is init with a string literal

	cout << s2 << endl;

	// cout << s2[0] << endl;
	// cout << s2[1] << endl;
	// cout << s2[2] << endl;
	// cout << s2[3] << endl;
	// cout << s2[4] << endl;

	for (int i = 0; s2[i] != '\0'; i++) {
		cout << s2[i] << endl;
	}

	return 0;
}