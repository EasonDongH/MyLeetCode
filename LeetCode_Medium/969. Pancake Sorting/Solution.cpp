#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int cntInvertionPair(const vector<int>& A) {
		int cnt = 0, size = A.size();
		for (int i = 0; i < size; ++i) {
			for (int j = i + 1; j < size; ++j) {
				if (A[j] < A[i])
					++cnt;
			}
		}
		if (cnt == 1 || size < cnt)
			cnt = size;
		else if (cnt == size - 1 && A[0] == size)
			cnt = size;
		return cnt;
	}

	void swapFirstK(int k, vector<int>& A) {
		for (int i = 0, j = k - 1; i < j; ++i, --j)
			swap(A[i], A[j]);
	}
public:
	vector<int> pancakeSort(vector<int>& A) {
		int k;
		vector<int> ans;

		while (true) {
			k = cntInvertionPair(A);
			if (k == 0)
				break;
			ans.push_back(k);
			swapFirstK(k, A);
		}

		return ans;
	}
};