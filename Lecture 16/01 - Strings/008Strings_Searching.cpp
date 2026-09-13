#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "abcababababc";
	string t = "bab";

	cout << s.find(t) << endl;
	cout << s.rfind(t) << endl;

	t = "cab";

	cout << s.find(t) << endl;

	t = "xyz";

	cout << s.find(t) << endl;

	cout << string::npos << endl;

	if (string::npos == -1) {
		cout << "yes" << endl;
	}

	return 0;
}