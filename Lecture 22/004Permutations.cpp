/*

Given a string (sequence of characters) of length n, generate all of its permutations.

Example

	Input : inp[] = "abc"
	Output: ["abc", "acb", "bac", "bca", "cba", "cab"]

*/

#include<iostream>
#include<cstring>

using namespace std;

void f(char inp[], int n, int i) {

	// base case
	if (i == n) { // inp[i] == '\0'
		cout << inp << endl;
		return;
	}

	// recursive case

	// f(i) : take decisions for inp[i...n-1]

	// decide for the inp[i]

	for (int j = i; j < n; j++) {
		swap(inp[i], inp[j]);
		f(inp, n, i + 1);
		swap(inp[i], inp[j]); // backtracking
	}


}

int main() {

	char inp[] = "abc";
	int n = strlen(inp);

	f(inp, n, 0);

	return 0;
}
