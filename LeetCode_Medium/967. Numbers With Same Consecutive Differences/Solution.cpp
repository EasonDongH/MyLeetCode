#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> numsSameConsecDiff(int N, int K) {
		if (N == 1) {
			if (K == 0)
				return vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		}

		queue<int> qI;
		for (int i = 1; i < 10; ++i)
			qI.push(i);
		for (int i = 1; i < N; ++i) {
			for (int j = 0, size = qI.size(); j < size; ++j) {
				auto num = qI.front();
				qI.pop();
				auto digit = num % 10;
				if (digit - K >= 0)
					qI.push(num * 10 + (digit - K));
				if (digit + K < 10)
					qI.push(num * 10 + (digit + K));
			}
		}

		vector<int> ans;
		while (!qI.empty()) {
			ans.push_back(qI.front());
			qI.pop();
		}
		return ans;
	}
};