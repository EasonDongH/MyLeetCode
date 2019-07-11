#include <bits/stdc++.h>
using namespace std;

class Solution {
	bool check_sub_box(vector<vector<char>>& board, int r, int c) {
		bool flag = true, mark[128] = { false };
		for (int i = 0; i < 3 && flag; ++i) {
			for (int j = 0; j < 3 && flag; ++j) {
				flag = mark[board[i + r][j + c]] == false;
				if (board[i + r][j + c] != '.')
					mark[board[i + r][j + c]] = true;
			}
		}
		return flag;
	}
public:
	bool isValidSudoku(vector<vector<char>> & board) {
		bool flag = true;
		int row = board.size(), col = board[0].size();
		for (int c = 0; c < col && flag; ++c) {
			bool mark[128] = { false };
			for (int r = 0; r < row && flag; ++r) {
				flag = mark[board[r][c]] == false;
				if (board[r][c] != '.')
					mark[board[r][c]] = true;
			}
		}
		for (int r = 0; r < row && flag; ++r) {
			bool mark[128] = { false };
			for (int c = 0; c < col && flag; ++c) {
				flag = mark[board[r][c]] == false;
				if (board[r][c] != '.')
					mark[board[r][c]] = true;
			}
		}
		for (int c = 0; c < col && flag; c += 3) {
			for (int r = 0; r < row && flag; r += 3) {
				flag = check_sub_box(board, r, c);
			}
		}
		return flag;
	}
};