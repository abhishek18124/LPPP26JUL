/*

https://leetcode.com/problems/n-queens/

*/
class Solution {
public:

	bool isValid(int n, vector<string>& board, int i, int j) {
		// check if you can place Qi in the jth column of row i

		// you can do that only Qi upon being placed in the jth column of row i
		// doesn't any previously placed queen i.e. Q0 to Qi-1

		for (int row = i - 1; row >= 0; row--) {
			if (board[row][j] == 'Q') {
				// you've found a previously placed queen
				// in the jth column so we cannot place the
				// ith queen in the jth column of the ith row
				return false;
			}
		}

		for (int row = i - 1, step = 1;
		        row >= 0 and j + step < n;
		        row--, step++) {

			if (board[row][j + step] == 'Q') {
				// you've found a previously placed queen
				// in the right diagonal of the jth column
				// so we cannot place the ith queen in the
				// jth column of the ith row
				return false;
			}
		}

		for (int row = i - 1, step = 1;
		        row >= 0 and j - step >= 0;
		        row--, step++) {

			if (board[row][j - step] == 'Q') {
				// you've found a previously placed queen
				// in the left diagonal of the jth column
				// so we cannot place the ith queen in the
				// jth column of the ith row
				return false;
			}
		}

		// jth column is a valid option in the ith row for Qi

		return true;
	}

	void f(int n,
	       vector<string>& board,
	       vector<vector<string>>& allBoards,
	       int i) {
		// base case
		if (i == n) { // you've placed all the n queens on the board
			allBoards.push_back(board);
			return;
		}

		// recursive case

		// f(i) : place queens i to n-1 in rows i to n-1

		// decide the ith queen

		for (int j = 0; j < n; j++) {
			// check if the jth column is a valid position of Qi in the ith row
			if (isValid(n, board, i, j)) {
				board[i][j] = 'Q';
				f(n, board, allBoards, i + 1);
				board[i][j] = '.'; // backtracking
			}
		}
	}

	vector<vector<string>> solveNQueens(int n) {

		vector<string> board;
		for (int i = 0; i < n; i++) {
			string row(n, '.');
			board.push_back(row);
		}

		vector<vector<string>> allBoards;

		f(n, board, allBoards, 0);

		return allBoards;
	}

};