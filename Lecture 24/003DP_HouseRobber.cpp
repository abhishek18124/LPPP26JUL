/*

https://leetcode.com/problems/house-robber/

*/

class Solution {
public:

	// time : O(2^n)
	// space: O(n) due to fn call stack

	int f(const vector<int>& nums, int i) {

		// base case

		if (i == nums.size() || i == nums.size() + 1) {
			return 0;
		}

		// recursive case

		// f(i) : find the max. money you can rob from houses[i...n-1]

		// decide for the ith house

		// option 1 : rob the ith house

		int robOption = nums[i] + f(nums, i + 2);

		// option 2 : don't rob the ith house

		int donotRobOption = f(nums, i + 1);

		return max(robOption, donotRobOption);

	}

	// time : O(n)
	// space: O(n) due to fn call stack + dp[]

	int fTopdown(const vector<int>& nums, int i, vector<int>& dp) {

		// lookup
		if (dp[i] != -1) {
			return dp[i];
		}

		// base case

		if (i == nums.size() || i == nums.size() + 1) {
			return dp[i] = 0;
		}

		// recursive case

		// f(i) : find the max. money you can rob from houses[i...n-1]

		// decide for the ith house

		// option 1 : rob the ith house

		int robOption = nums[i] + fTopdown(nums, i + 2, dp);

		// option 2 : don't rob the ith house

		int donotRobOption = fTopdown(nums, i + 1, dp);

		return dp[i] = max(robOption, donotRobOption);

	}

	int rob(vector<int>& nums) {
		// return f(nums, 0);
		vector<int> dp(nums.size() + 2, -1);
		return fTopdown(nums, 0, dp);
	}
};