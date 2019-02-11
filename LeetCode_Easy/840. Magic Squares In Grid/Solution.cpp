#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	bool isMagicSquare(int r, int c, vector<vector<int>>& grid) {
		int colSum[3] = { 0 }, rowSum[3] = { 0 }, diagonals[2] = { 0 };
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				rowSum[i] += grid[i + r][j + c];
				colSum[j] += grid[i + r][j + c];
				if (i == j)
					diagonals[0] += grid[i + r][j + c];
				if (i + j == 2)
					diagonals[1] += grid[i + r][j + c];
			}
		}

		if (diagonals[0] != diagonals[1])
			return false;

		for (int i = 0; i < 3; ++i) {
			if (diagonals[0] != colSum[i] || diagonals[1] != rowSum[i])
				return false;
		}

		return true;
	}
public:
	int numMagicSquaresInside(vector<vector<int>>& grid) {
		int ans = 0;
		for (int i = 0; i + 3 <= int(grid.size()); ++i) {
			for (int j = 0; j + 3 <= int(grid[i].size()); ++j) {
				if (isMagicSquare(i, j, grid))
					++ans;
			}
		}

		return ans;
	}
};