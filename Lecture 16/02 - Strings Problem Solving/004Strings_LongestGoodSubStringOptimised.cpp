#include<iostream>
#include<string>

using namespace std;

int main() {

	string str = "cbaeicdeiou";

	int cnt = 0; // to track the length of the longest good substring

	int maxSoFar = 0;

	// time : O(n)

	for (char ch : str) {

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			cnt++;
			maxSoFar = max(maxSoFar, cnt);
		} else {
			cnt = 0;
		}

	}

	cout << maxSoFar << endl;

	return 0;
}