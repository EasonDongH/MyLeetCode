#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int cnt = 0;
	int helper(vector<int>& A, int L, int R, int K)
	{
		if (R == L)
			return A[L];
		int mid = L + (R - L) / 2;
		int LSum = helper(A, L, mid, K);
		int RSum = helper(A, mid + 1, R, K);
		if (LSum%K == 0)
			++cnt;
		if (RSum%K == 0)
			++cnt;
		if ((LSum + RSum) % K == 0)
			++cnt;
		return LSum + RSum;
	}
public:
	int subarraysDivByK(vector<int>& A, int K) {
		int size = A.size();
		helper(A, 0, size - 1, K);
		return cnt;
	}
};