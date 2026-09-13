#include<iostream>
#include<string>

using namespace std;

// by default when you pass string to a fn, its copy is sent
// which can be expensive so it advised to pass string by
// reference, and if your fn is not going to modifying the
// string, make it a const ref

// time : O(n^3)

void generateSubstrings(const string& str) {

	int n = (int)str.size();

	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {

			// generate the substring that starts
			// at the ith index and ends at the
			// jth index

			// for (int k = i; k <= j; k++) {
			// 	cout << str[k];
			// }

			// cout << endl;

			cout << str.substr(i, j - i + 1) << endl;

		}

		cout << endl;

	}

}

int main() {

	string str = "abcde";

	generateSubstrings(str);

	return 0;
}