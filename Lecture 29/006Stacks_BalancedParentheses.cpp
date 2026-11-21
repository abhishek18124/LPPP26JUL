class Solution {
public:
// time : O(n) // space : O(n)
	bool isValid(string s) {
		stack<char> stk;
		for (char ch : s) {
			switch (ch) {
			case '(': stk.push(ch); break;
			case '[': stk.push(ch); break;
			case '{': stk.push(ch); break;
			case ')': if (!stk.empty() and stk.top() == '(') stk.pop(); else return false; break;
			case ']': if (!stk.empty() and stk.top() == '[') stk.pop(); else return false; break;
			case '}': if (!stk.empty() and stk.top() == '{') stk.pop(); else return false; break;
			}
		}
		return stk.empty();
	}
};