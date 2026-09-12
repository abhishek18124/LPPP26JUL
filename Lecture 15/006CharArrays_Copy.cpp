#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char s1[100] = "abcde";
	char s2[] = "xyz";

	cout << s1 << endl;

	// [HW] try to implement strcpy using your own fn

	strcpy(s1, s2); // copies s2 into s1

	cout << s1 << endl;

	return 0;
}