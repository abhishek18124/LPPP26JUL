/*

https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

*/

class Solution {
public:

    bool f(const vector<int>& bloomDay, int m, int k, int timeLimit) { // time : O(n)

        // check if we can make 'm' bouquets of 'k' adjacent flowers in 'timeLimit' days

        int cnt = 0;

        for (int day : bloomDay) {
            if (day <= timeLimit) {
                // current flower has bloomed
                cnt++;
                if (cnt == k) {
                    // we've managed to pick k adjacent flowers so we can make one bouquet
                    m--;
                    if (m == 0) {
                        // we've managed to make 'm' bouquets in given timeLimit
                        return true;
                    }
                    cnt = 0;
                }
            } else {
                // current flower has not bloomed
                cnt = 0;
            }
        }

        return false; // we cannot make 'm' bouquets in the given timeLimit

    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int s = *min_element(bloomDay.begin(), bloomDay.end());
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while (s <= e) { // log(e-s) * n
            int mid = s + (e - s) / 2;
            // can I make 'm' of 'k' adj flowers in 'mid' days ?
            if (f(bloomDay, m, k, mid)) {
                // we can make 'm' bouquets of 'k' adj flowers in 'mid' days
                ans = mid;
                e = mid - 1;
            } else {
                // we cannot make 'm' bouquets of 'k' adj flowers in 'mid' days
                s = mid + 1;
            }
        }
        return ans;
    }
};