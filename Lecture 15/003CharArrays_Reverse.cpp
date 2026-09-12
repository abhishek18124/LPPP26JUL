#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

void reverseString(char str[]) {

	int i = 0;
	int j = strlen(str) - 1;

	while (i < j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}

}

int main() {

	char str[] = "hello";

	cout << str << endl;

	// reverseString(str);

	int n = strlen(str);

	// reverse(str, str + n); // [0, n) => [0, n-1]

	reverse(str + 1, str + 4); // [1, 4) => [0, 3]

	cout << str << endl;

	return 0;
}