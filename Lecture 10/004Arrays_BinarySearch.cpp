#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int t) {

	int s = 0;
	int e = n - 1;

	while (s <= e) {

		// int mid = (s + e) / 2;
		int mid = s + (e - s) / 2;
		if (arr[mid] == t) {
			return mid;
		} else if (t > arr[mid]) {
			// go towards right of mid to search for t
			// i.e. reduce search space from [s, e] to [mid+1, e]
			s = mid + 1;
		} else {
			// t < arr[mid]
			// go towards left of mid to search for t
			// i.e. reduce search space from [s, e] to [s, mid-1]
			e = mid - 1;
		}

	}

	// t is not in the arr[]
	return -1;

}

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	cout << binarySearch(arr, n, t) << endl;

	return 0;
}