#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
		int ans = 0, tmp = 0;
		vector<int> pre_sum;
		pre_sum.push_back(0);
		for (int i = 0, size = A.size(); i < size; ++i)
			pre_sum.push_back(A[i] + pre_sum[i]);
		for (int i = 0, size = pre_sum.size(); i + L < size; ++i) {
			tmp = 0;
			for (int j = 0; j + M < i; ++j)
				if (pre_sum[j + M] - pre_sum[j] > tmp)
					tmp = pre_sum[j + M] - pre_sum[j];

			for (int j = i + L; j + M < size; ++j)
				if (pre_sum[j + M] - pre_sum[j] > tmp)
					tmp = pre_sum[j + M] - pre_sum[j];

			if (pre_sum[i + L] - pre_sum[i] + tmp > ans)
				ans = pre_sum[i + L] - pre_sum[i] + tmp;
		}
		return ans;
	}
};