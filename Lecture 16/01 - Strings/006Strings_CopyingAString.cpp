#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "hello";

	string s2;
	s2 = s1;

	cout << s2 << endl;

	string s3 = s1;

	cout << s3 << endl;

	s2[0] = 'g';

	cout << s1 << endl;
	cout << s2 << endl;

	s3[0] = 'p';

	cout << s1 << endl;
	cout << s3 << endl;

	// since s2 and s3 are copies of s1, changes done
	// to them won't change s1

	string& s4 = s1;

	s4[0] = 'k';

	cout << s1 << endl;
	cout << s4 << endl;

	return 0;
}