#include<iostream>

using namespace std;

void incr(int& b) { // here we are passing arg by ref so any changes done to the param will be reflected in the arg since param is just a new name for arg
	b++;
}

int main() {

	int a = 10;

	incr(a);

	cout << a << endl;

	return 0;
}