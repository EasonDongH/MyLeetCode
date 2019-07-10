#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> pathInZigZagTree(int label) {
		int row = 0, current = 1, row_index = 0;
		vector<int> row_size(1,0), ans;
		while (current - 1 < label) {
			row_size.push_back(current);
			current *= 2;
			++row;
		}
		while (row > 0) {
			row_index = label - pow(2, row - 1) + 1;
			label = row_size[row] + row_index - 1;
			ans.push_back(label);
			row_index = (row_index + 1) / 2;
			if ((row & 1) == 0)
				row_index = row_size[row - 1] - row_index + 1;
			label = row_size[row - 1] + row_index - 1;
			--row;
		}
		return ans;
	}
};
