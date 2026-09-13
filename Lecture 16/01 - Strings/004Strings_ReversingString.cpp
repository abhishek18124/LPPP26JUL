#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {

	string s = "hello";

	cout << s << endl;

	// reverse(s.begin(), s.end());

	reverse(s.begin() + 1, s.begin() + 4); // [1, 4)

	cout << s << endl;

	return 0;
}