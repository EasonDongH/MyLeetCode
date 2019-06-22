#include <bits/stdc++.h>
using namespace std;

class Solution {
	int R, C;
	vector<vector<bool>> isBorder, isConnectedComponent;
	void dfs(int r0, int c0, int r, int c, const vector<vector<int>>& grid) {
		if (r < 0 || r >= R || c < 0 || c >= C || isConnectedComponent[r][c])
			return;
		if (grid[r][c] != grid[r0][c0])
			return;
		isConnectedComponent[r][c] = true;
		dfs(r0, c0, r + 1, c, grid);
		dfs(r0, c0, r - 1, c, grid);
		dfs(r0, c0, r, c + 1, grid);
		dfs(r0, c0, r, c - 1, grid);
	}
	void getBorder() {
		for (int i = 0; i < R; ++i) {
			for (int j = 0; j < C; ++j) {
				if (isConnectedComponent[i][j]) {
					if (i == 0 || i == R - 1 || j == 0 || j == C - 1 || (i > 0 && isConnectedComponent[i - 1][j] == false) || (i < R - 1 && isConnectedComponent[i + 1][j] == false) || (j > 0 && isConnectedComponent[i][j - 1] == false) || (j < C - 1 && isConnectedComponent[i][j + 1] == false)) {
						isBorder[i][j] = true;
					}
				}
			}
		}
	}
public:
	vector<vector<int>> colorBorder(vector<vector<int>> & grid, int r0, int c0, int color) {
		R = grid.size(); C = grid[0].size();
		isBorder.resize(R, vector<bool>(C, false));
		isConnectedComponent.resize(R, vector<bool>(C, false));
		dfs(r0, c0, r0, c0, grid);
		getBorder();
		for (int i = 0; i < R; ++i) {
			for (int j = 0; j < C; ++j) {
				if (isBorder[i][j])
					grid[i][j] = color;
			}
		}
		return grid;
	}
};