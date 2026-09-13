#include<iostream>
#include<string>

using namespace std;

int main() {

	string s;

	cin >> s; // cin >> stops reading as soon as it encounters a whitespace

	// cin >> ignores leading whitespaces

	// cin >> stops reading at the 1st non-leading whitespace

	cout << s << endl;

	return 0;
}