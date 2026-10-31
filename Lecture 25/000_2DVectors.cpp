#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	int n = v.size();

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	vector<int> w = {10, 20, 30, 40, 50};

	int m = w.size();

	for (int i = 0; i < m; i++) {
		cout << w[i] << " ";
	}

	cout << endl;

	vector<vector<int>> matrix = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int numRows = matrix.size();
	int numCols = matrix[2].size();

	cout << numRows << endl;
	cout << numCols << endl;

	// cout << matrix[0][0] << " " << matrix[0][1] << " " << matrix[0][2] << " " << matrix[0][3] << endl;
	// cout << matrix[1][0] << " " << matrix[1][1] << " " << matrix[1][2] << " " << matrix[1][3] << endl;
	// cout << matrix[2][0] << " " << matrix[2][1] << " " << matrix[2][2] << " " << matrix[2][3];

	// for (int i = 0; i < numRows; i++) {
	// 	cout << matrix[i][0] << " " << matrix[i][1] << " " << matrix[i][2] << " " << matrix[i][3] << endl;

	// }

	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numCols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	vector<int> arr(10, 100);

	for (int i = 0; i < (int)arr.size(); i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	vector<vector<int>> mat(3, vector<int>(4, 200));

	// "mat" is a vector<> of size 3 whose each element
	// is a 1d vector<> of size 4 initialised with 200

	int rows = mat.size();
	int cols = mat[0].size();

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}