class Solution {
public:
    // time : O(n)
    int maxArea(vector<int>& arr) {
        int n = (int)arr.size();
        int i = 0;
        int j = n - 1;
        int maxSoFar = 0;
        while (i < j) {
            int w = j - i;
            int h = min(arr[i], arr[j]);
            int a = w * h;
            maxSoFar = max(maxSoFar, a);
            if (arr[i] < arr[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxSoFar;
    }
};