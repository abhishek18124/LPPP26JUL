#include<iostream>
#include<cstring>

using namespace std;

int main() {

	// int A[5] = {10, 20, 30, 40, 50};
	int A[] = {10, 20, 30, 40, 50};

	cout << A[0] << " "
	     << A[1] << " "
	     << A[2] << " "
	     << A[3] << " "
	     << A[4] << endl;

	// cout << A[7]; // don't go out of bounds // undefined behaviour

	int B[5] = {100, 200, 300};

	cout << B[0] << " "
	     << B[1] << " "
	     << B[2] << " "
	     << B[3] << " "
	     << B[4] << endl;

	int C[5] = {1000};

	cout << C[0] << " "
	     << C[1] << " "
	     << C[2] << " "
	     << C[3] << " "
	     << C[4] << endl;

	int D[5] = {};

	cout << D[0] << " "
	     << D[1] << " "
	     << D[2] << " "
	     << D[3] << " "
	     << D[4] << endl;

	int E[5] = {0};

	cout << E[0] << " "
	     << E[1] << " "
	     << E[2] << " "
	     << E[3] << " "
	     << E[4] << endl;

	int F[5];

	memset(F, 0, sizeof(F));
	// memset(F, -1, sizeof(F));

	cout << F[0] << " "
	     << F[1] << " "
	     << F[2] << " "
	     << F[3] << " "
	     << F[4] << endl;

	return 0;
}