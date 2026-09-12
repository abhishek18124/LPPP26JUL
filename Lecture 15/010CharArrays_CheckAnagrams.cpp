#include<iostream>
#include<map>

using namespace std;

// time : n + n + 26 ~ O(n)
// space: 26 + 26 ~ O(1)

bool isAnagram(char s1[], char s2[]) {

	// 1. build a freqMap for s1[] : n.log26 ~ O(n)

	map<char, int> freqMap1;

	for (int i = 0; s1[i] != '\0'; i++) {
		char ch = s1[i];
		freqMap1[ch]++;
	}

	// for (auto [ch, freq] : freqMap1) {
	// 	cout << ch << " : " << freq << endl;
	// }

	// cout << endl;

	// 2. build a freqMap for s2[] : n.log26 ~ O(n)

	map<char, int> freqMap2;

	for (int i = 0; s2[i] != '\0'; i++) {
		char ch = s2[i];
		freqMap2[ch]++;
	}

	// for (auto [ch, freq] : freqMap2) {
	// 	cout << ch << " : " << freq << endl;
	// }

	// cout << endl;

	// 3. compare both the freqMaps : O(26)

	return freqMap1 == freqMap2;

}

int main() {

	char s1[] = "state";
	char s2[] = "taste";

	isAnagram(s1, s2) ? cout << "anagram" << endl :
	                         cout << "not anagram" << endl;

	return 0;
}