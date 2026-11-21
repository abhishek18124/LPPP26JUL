#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

// time : O(n) // space : O(n) due to monotonic stack

vector<int> nearestGreaterElementToRight(const vector<int>& arr) {

	vector<int> ans;
	stack<int> stk; // monotonic stack

	int n = (int)arr.size();

	for (int i = n - 1; i >= 0; i--) {

		// find the nearest greater element to the right of arr[i]

		while (!stk.empty() and stk.top() <= arr[i]) {
			stk.pop();
		}

		if (stk.empty()) {
			// there is no greater element to the right of arr[i]
			ans.push_back(-1);
		} else {
			// whatever is at the top of the stack is the nearest greater element to the right of arr[i]
			ans.push_back(stk.top());
		}

		stk.push(arr[i]);

	}

	reverse(ans.begin(), ans.end());

	return ans;

}

int main() {

	vector<int> arr = {5, 3, 6, 7, 2, 1, 4};

	vector<int> ans = nearestGreaterElementToRight(arr);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}