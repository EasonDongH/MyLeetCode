#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		if (matrix.size() == 0)
			return {};
		int Rmin = 0, Rmax = matrix.size() - 1, Cmin = 0, Cmax = matrix[0].size() - 1;
		int direction = 0, size = (Rmax + 1) * (Cmax + 1), r = 0, c = 0;
		vector<int> ans;
		while ((int)ans.size() < size) {
			switch (direction) {
			case 0:
				// 从左到右，列增行不变
				for (c = Cmin; c <= Cmax; ++c)
					ans.push_back(matrix[r][c]);
				Rmin += 1;
				c = Cmax;
				break;
			case 1:
				// 从上到下，行增列不变
				for (r = Rmin; r <= Rmax; ++r)
					ans.push_back(matrix[r][c]);
				Cmax -= 1;
				r = Rmax;
				break;
			case 2:
				// 从右到左，列减行不变
				for (c = Cmax; c >= Cmin; --c)
					ans.push_back(matrix[r][c]);
				Rmax -= 1;
				c = Cmin;
				break;
			case 3:
				// 从下到上，行减列不变
				for (r = Rmax; r >= Rmin; --r)
					ans.push_back(matrix[r][c]);
				Cmin += 1;
				r = Rmin;
				break;
			}
			direction = (direction + 1) % 4;
		}
		return ans;
	}
};