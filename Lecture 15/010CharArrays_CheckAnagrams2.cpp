#include<iostream>
#include<map>

using namespace std;

// time : n + n + 26 ~ O(n)
// space: 26 + 26 ~ O(1)

bool isAnagram(char s1[], char s2[]) {

	// 1. build a freqMap for s1[] : n.const ~ O(n)

	int freq1[26] = {0};
	for (int i = 0; s1[i] != '\0'; i++) {
		char ch = s1[i];
		int idx = ch - 'a';
		freq1[idx]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << freq1[i] << " ";
	}

	cout << endl;

	// 2. build a freqMap for s2[] : n.const ~ O(n)

	int freq2[26] = {0};
	for (int i = 0; s2[i] != '\0'; i++) {
		char ch = s2[i];
		int idx = ch - 'a';
		freq2[idx]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << freq2[i] << " ";
	}

	cout << endl;

	// 3. compare both the freqMaps : O(26)

	for (int i = 0; i < 26; i++) {
		if (freq1[i] != freq2[i]) {
			return false;
		}
	}

	return true;


}

int main() {

	char s1[] = "statt";
	char s2[] = "taste";

	isAnagram(s1, s2) ? cout << "anagram" << endl :
	                         cout << "not anagram" << endl;

	return 0;
}