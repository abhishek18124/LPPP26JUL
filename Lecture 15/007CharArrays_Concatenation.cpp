// n <= 50 and m <= 50

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char s1[101] = "abc";
	char s2[] = "def";

	cout << s1 << endl;

	// [HW] try to implement strcat yourself

	strcat(s1, s2);

	cout << s1 << endl;

	return 0;
}