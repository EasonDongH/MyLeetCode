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
				// �����ң������в���
				for (c = Cmin; c <= Cmax; ++c)
					ans.push_back(matrix[r][c]);
				Rmin += 1;
				c = Cmax;
				break;
			case 1:
				// ���ϵ��£������в���
				for (r = Rmin; r <= Rmax; ++r)
					ans.push_back(matrix[r][c]);
				Cmax -= 1;
				r = Rmax;
				break;
			case 2:
				// ���ҵ����м��в���
				for (c = Cmax; c >= Cmin; --c)
					ans.push_back(matrix[r][c]);
				Rmax -= 1;
				c = Cmin;
				break;
			case 3:
				// ���µ��ϣ��м��в���
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