#include<iostream>

using namespace std;

int main() {

	char grade;
	cin >> grade;

	// if (grade == 'A') {
	// 	cout << "excellent" << endl;
	// } else if (grade == 'B') {
	// 	cout << "good" << endl;
	// } else if (grade == 'C') {
	// 	cout << "avg" << endl;
	// } else if (grade == 'D') {
	// 	cout << "bad" << endl;
	// } else if (grade == 'F') {
	// 	cout << "fail" << endl;
	// } else {
	// 	cout << "invalid grade" << endl;
	// }

	switch (grade) {
	case 'A': cout << "excellent" << endl; break;
	case 'B': cout << "good" << endl; break;
	case 'C': cout << "avg" << endl; break;
	case 'D': cout << "bad" << endl; break;
	case 'F': cout << "fail" << endl; break;
	default: cout << "invalid grade" << endl; break; // optional
	}

	return 0;
}