#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	// time : O(sqrt(n))

	int i = 2;

	while (i * i <= n) {

		if (n % i == 0) {
			cout << "not prime" << endl;
			break;
		}

		i = i + 1;

	}

	if (i * i > n) {
		cout << "prime" << endl;
	}

	return 0;
}