#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	vector<string> names;

	names.push_back("ding");
	names.push_back("garima");
	names.push_back("angel");
	names.push_back("kanhaiya");
	names.push_back("sudhama");
	names.push_back("zhobin");

	sort(names.begin(), names.end()); // by default vector<str> is sorted in lex. inc. order

	for (string n : names) {
		cout << n << endl;
	}

	cout << endl;

	sort(names.rbegin(), names.rend()); // by default vector<str> is sorted in lex. inc. order

	for (string n : names) {
		cout << n << endl;
	}

	cout << endl;

	return 0;
}