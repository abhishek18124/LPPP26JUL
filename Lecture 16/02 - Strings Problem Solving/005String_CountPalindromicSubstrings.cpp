class Solution {
public:

    bool isPalindrome(const string& s) {
        int i = 0;
        int j = (int)s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    // time : O(n^3)
    // [HW] Optimise this algorithm to O(n^2)

    int countSubstrings(string s) {

        int n = (int)s.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                // check if the substring that starts
                // at the ith index and ends at the
                // jth index is a palindrome or not
                string subString = s.substr(i, j - i + 1);
                if (isPalindrome(subString)) {
                    cnt++;
                }
            }
        }

        return cnt;


    }
};