#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxWidthRamp(vector<int>& A) {
		int size = A.size(), max_Width = 0;
		vector<int> mark(A.size(), 0);

		mark[size - 1] = size - 1;
		for (int i = size - 2; 0 <= i; --i) {
			if (A[mark[i + 1]] < A[i])
				mark[i] = i;
			else
				mark[i] = mark[i + 1];
		}

		for (int i = 0; i < size; ++i)
			max_Width = max(max_Width, mark[i] - i);

		return max_Width;
	}
};