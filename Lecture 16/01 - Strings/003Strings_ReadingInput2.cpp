#include<iostream>
#include<string>

using namespace std;

int main() {

	string s;

	// getline(cin, s);

	// getline stops reading as soon as it encounters '\n'

	getline(cin, s, '$');

	cout << s << endl;

	return 0;
}