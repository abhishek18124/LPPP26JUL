#include<iostream>

using namespace std;

void greet() {
	cout << "hi";
	return; // optional
}

int main() {

	cout << "I am inside the main() before greet()\n";

	greet();

	cout << "\nI am inside the main() after greet()\n";

	return 0;
}