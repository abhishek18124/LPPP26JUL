#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {

	string s = "badc";

	cout << s << endl;

	sort(s.begin(), s.end()); // sorts the s in inc. order

	cout << s << endl;

	sort(s.rbegin(), s.rend()); // sorts the s in dec. order

	cout << s << endl;

	return 0;
}