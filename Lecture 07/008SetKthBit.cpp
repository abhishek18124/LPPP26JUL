#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 4;

	int mask = 1 << k;

	int ans = n | mask;
	cout << ans << endl;

	cout << (n | mask) << endl;

	return 0;
}