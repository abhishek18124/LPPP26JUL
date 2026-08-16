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

// 3 adv. of fn

// fn makes your code modular
// fn enhance code readability
// fn enables code reusuablity

void printPrimes(int m) {
	for (int n = 2; n <= m; n++) {
		// check if n is a prime no. or not
		if (isPrime(n)) {
			cout << n << " ";
		}
	}
}

int main() {

	int m;
	cin >> m;

	printPrimes(m);

	return 0;
}