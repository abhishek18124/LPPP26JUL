#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {

	int i = 2;

	while (i * i <= n) {

		if (n % i == 0) {
			// n is not prime
			return false;
		}

		i++;

	}

	// n is prime
	return true;

}

int main() {

	int n;
	cin >> n;

	isPrime(n) ? cout << "prime" << endl : cout << "not prime" << endl;

	return 0;
}