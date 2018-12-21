#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	bool checkDiagonal(int r, int c, int n, int m, vector<vector<int>>& matrix) {
		for (int i = r + 1, j = c + 1; i < m&&j < n; ++i, ++j) {
			if (matrix[r][c] != matrix[i][j])
				return false;
		}
		return true;
	}
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
		int m = matrix.size(), n = matrix[0].size();

		for (int c = 0; c < n; ++c)
			if (!checkDiagonal(0, c, n, m, matrix))
				return false;
		for (int r = 1; r < m; ++r)
			if (!checkDiagonal(r, 0, n, m, matrix))
				return false;
		return true;
	}
};