/*

	Given N cartesian points in a 2D plane, count the number of right-angled triangles that
	can be formed such that the base or perpendicular is parallel to the x-axis or y-axis.

	Examples

	Input : {(0, 0),
	         (2, 0),
	         (0, 1)}

	Output: 1

	Input : {(1, 2),
			 (2, 0),
			 (2, 2),
			 (2, 3),
			 (4, 2)}

	Output: 4

*/

#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {

	vector<pair<int, int>> points;

	points.push_back({1, 2});
	points.push_back({2, 0});
	points.push_back({2, 2});
	points.push_back({2, 3});
	points.push_back({4, 2});

	map<int, int> xFreqMap;
	map<int, int> yFreqMap;

	for (auto [x, y] : points) {
		xFreqMap[x]++;
		yFreqMap[y]++;
	}

	int ans = 0; // to store total no. of valid triangles in the 2d plane

	// time : O(nlogn)
	// space: O(n) due to xFreqMap and yFreqMap

	for (auto [x, y] : points) {

		// find out no. of valid triangles with (x, y) as pivot

		// 1. find no. of points in 2d plane whose x-coordinate matches pivot's x

		// 2. find no. of points in 2d plane whose y-coordinate matches pivot's y

		int a = xFreqMap[x];
		int b = yFreqMap[y];

		ans += ((a - 1) * (b - 1)); // -1 to avoid counting pivot

	}

	cout << ans << endl;

	return 0;

}