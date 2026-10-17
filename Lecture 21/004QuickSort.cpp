// constraints : n <= 100

#include<iostream>

using namespace std;

int partition(int arr[], int s, int e) {

	int pivot = arr[e];

	int i = s;
	int j = s;

	while (j < e) {

		// if (arr[j] > pivot) { // put arr[j] to right block
		// 	j++;
		// } else { // put arr[j] to left block
		// 	swap(arr[i], arr[j]);
		// 	i++;
		// 	j++;
		// }

		if (arr[j] < pivot) {
			// put arr[j] to the left block
			swap(arr[i], arr[j]);
			i++;
		}

		j++;

	}

	swap(arr[i], arr[e]);
	return i;


}

void quickSort(int arr[], int s, int e) {

	// base case

	if (s == e) { // optional base case
		return;
	}

	if (s > e) { // mandatory base case
		return;
	}

	// recursive case

	// f(s, e) : sort arr[s...e] using quickSort algorithm

	// 1. partition array around the pivot

	int pidx = partition(arr, s, e);

	// 2. ask your friend to quickSort left and right partition

	quickSort(arr, s, pidx - 1);
	quickSort(arr, pidx + 1, e);

}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}