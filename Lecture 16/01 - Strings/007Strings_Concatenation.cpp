#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "abc";
	string s2 = "def";

	cout << s1 << endl;
	cout << s2 << endl;

	s1 = s1 + s2;

	cout << s1 << endl;
	cout << s2 << endl;

	return 0;
}