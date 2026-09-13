#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "coding";

	cout << s.substr(0, 2) << endl;

	string s_ = s.substr(0, 2);

	cout << s_ << endl;

	cout << s.substr(2, 2) << endl;

	cout << s.substr(2, 3) << endl;

	cout << s.substr(2, 4) << endl;

	cout << s.substr(1) << endl;

	return 0;
}