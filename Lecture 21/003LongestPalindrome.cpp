// https://leetcode.com/problems/longest-palindrome/
class Solution {
public:
    // time : n * log52 ~ n.const ~ O(n)
    // space: 52 ~ O(1)
    int longestPalindrome(string s) {
        set<char> seen;
        // unordered_set<char> seen;
        int ans = 0;
        for (char ch : s) {
            if (seen.find(ch) == seen.end()) {
                seen.insert(ch);
            } else {
                ans += 2;
                seen.erase(ch);
            }
        }
        if (!seen.empty()) {
            ans++;
        }
        return ans;
    }
};