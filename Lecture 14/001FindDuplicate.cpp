// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:

	// time : O(n) // space : O(n) due to freq[]

	int findDuplicate(vector<int>& nums) {

		int n = (int)nums.size();

		int ans; // to track duplicate

		vector<int> freq(n + 1, 0);

		for (int x : nums) {
			freq[x]++;
			if (freq[x] > 1) {
				ans = x;
				break;
			}
		}

		return ans;

		// int ans;

		// for(int i=1; i<=n; i++) {
		//     if(freq[i] > 1) {
		//         ans = i;
		//         break;
		//     }
		// }

		// return ans;
	}
};