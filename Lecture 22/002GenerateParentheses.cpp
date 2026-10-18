// n <= 8

#include<iostream>

using namespace std;

void f(int n, char out[], int i, int openCnt, int closeCnt) {

	// base case
	if (i == 2 * n) {
		// openCnt == n and closeCnt == n
		out[i] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// f(i, openCnt, closeCnt) : take decisions for out[i...2n-1]
	// s.t so far we've used openCnt '(' and closeCnt ')'

	// decide out[i]

	// option 1 : use '('

	if (openCnt < n) {
		out[i] = '(';
		f(n, out, i + 1, openCnt + 1, closeCnt);
	}

	// option 2 : use ')'

	if (closeCnt < n) {
		out[i] = ')';
		f(n, out, i + 1, openCnt, closeCnt + 1);
	}

}

int main() {

	int n = 3;

	char out[17]; // size of out[] is based on contraints

	f(n, out, 0, 0, 0);

	return 0;
}