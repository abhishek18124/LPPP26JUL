#include<iostream>
#include<string>

using namespace std;

bool isGoodString(const string& str) {

	for (char ch : str) {

		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
			// ch is a consonant, str is not good
			return false;
		}

	}

	// str is good
	return true;

}

// time : O(n^3)

int lengthOfLongestGoodSubstring(const string& str) {

	int maxSoFar = 0;
	int n = (int)str.size();

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			string subString = str.substr(i, j - i + 1);
			if (isGoodString(subString)) {
				maxSoFar = max(maxSoFar, j - i + 1);
			}
		}
	}

	return maxSoFar;

}

int main() {

	string str = "cbaeicdeiou";

	cout << lengthOfLongestGoodSubstring(str) << endl;

	return 0;
}