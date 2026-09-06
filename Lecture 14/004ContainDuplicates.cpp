// operations in a map<> are worst case logn where n is the size of the map<>
// operations in an unordered_map<> are on-avg const but worst case O(n) where n is the size of the unordered_map<>

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	vector<int> v = {10, 20, 30, 10};

	unordered_map<int, int> freqMap;
	bool flag = false; // assume no duplicates

	for (int x : v) {
		freqMap[x]++;
		if (freqMap[x] > 1) {
			// we've found a duplicate
			flag = true;
			break;
		}
	}

	if (flag == false) {
		cout << "no duplicates" << endl;
	} else {
		cout << "duplicates present" << endl;
	}

	return 0;
}