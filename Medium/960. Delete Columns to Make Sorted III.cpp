#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	vector<bool> deleteForSingleString(string a) {
		vector<bool> ans(a.size(), false);
		int i = 1, index = 1;
		while (i < int(a.size())) {
			if (a[i] < a[i - 1]) {
				a = a.substr(0, i) + a.substr(i + 1);
				ans[index++] = true;
			}
			else {
				++i;
				++index;
			}

		}

		return ans;
	}
public:
	int minDeletionSize(vector<string>& A) {
		int ans = 0;
		vector<bool> mark(A[0].size(), false);
		for (int i = 0; i<int(A.size()); ++i) {
			vector<bool> tmp = deleteForSingleString(A[i]);

			for (int j = 0; j<int(tmp.size()); ++j) {
				if (tmp[j])
					mark[j] = true;
			}

		}

		for (int j = 0; j<int(mark.size()); ++j) {
			if (mark[j])
				++ans;
		}
		return ans;
	}
};