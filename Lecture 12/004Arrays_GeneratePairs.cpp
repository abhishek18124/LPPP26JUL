#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> arr = {10, 20, 30, 40, 50};
	int n = arr.size();

	for (int i = 0; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			cout << arr[i] << " " << arr[j] << endl;
		}
		cout << endl;
	}

	return 0;
}