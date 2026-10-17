/*

	https://cplusplus.com/reference/set/set/?kw=set
	https://cplusplus.com/reference/set/multiset/?kw=multiset

	> insert/erase/find is logarithmic i.e. O(logn)
	> values are inserted in the sorted order
	> set contains only distinct values
	> multiset allows duplicate values

*/

#include<iostream>
#include<set>

using namespace std;

int main() {

	set<int> s;

	s.insert(5);
	s.insert(4);
	s.insert(3);
	s.insert(2);
	s.insert(2);
	s.insert(6);

	cout << "size : " << s.size() << endl; // 6

	s.erase(3); // 3 will deleted
	s.erase(10); // since 10 is not present in the set<>, this call will be ignored

	cout << "size : " << s.size() << endl; // 5

	for (int x : s) {
		cout << x << " ";
	}

	cout << endl; // 1 2 4 5 6

	if (s.count(5)) {
		cout << "5 is present" << endl;
	} else {
		cout << "5 is absent" << endl;
	}

	if (s.count(7)) {
		cout << "7 is present" << endl;
	} else {
		cout << "7 is absent" << endl;
	}

	if (s.find(3) != s.end()) {
		cout << "3 is present" << endl;
	} else {
		cout << "3 is absent" << endl;
	}

	if (s.find(5) != s.end()) {
		cout << "5 is present" << endl;
	} else {
		cout << "5 is absent" << endl;
	}

	cout << *s.begin() << endl;

	// s.erase(*s.begin());

	// s.erase(s.find(6));

	for (int x : s) {
		cout << x << " ";
	}

	cout << endl;

	s.empty() ? cout << "set<> is empty" << endl : cout << "set<> is not empty" << endl;

	s.clear();

	cout << "size : " << s.size() << endl; // 0

	s.empty() ? cout << "set<> is empty" << endl : cout << "set<> is not empty" << endl;



	return 0;
}