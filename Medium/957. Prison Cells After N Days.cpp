#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isSame(vector<int>& v1, vector<int>& v2) {
		for (int i = 0; i<int(v1.size()); ++i)
			if (v1[i] != v2[i])
				return false;
		return true;
	}

	vector<int> prisonAfterNDays(vector<int>& cells, int N) {
		int n = N;
		bool flag = false;
		vector<int> tmp(cells.begin(), cells.end());

		tmp.at(0) = tmp.at(7) = 0;
		for (int i = 1; i <= 6; ++i)
			tmp.at(i) = (cells.at(i - 1) == cells.at(i + 1));

		vector<vector<int>> days_State;
		days_State.push_back(tmp);
		while (--n) {
			vector<int> *today, *lastday;
			if (flag) {
				flag = false;
				lastday = &cells;
				today = &tmp;
			}
			else {
				flag = true;
				lastday = &tmp;
				today = &cells;
			}

			today->at(0) = today->at(7) = 0;
			for (int i = 1; i <= 6; ++i)
				today->at(i) = (lastday->at(i - 1) == lastday->at(i + 1));

			if (isSame(days_State[0], *today))
				break;
			else
				days_State.push_back(*today);
		}

		if (0 == n)
			return days_State.back();
		else
			return days_State[N % days_State.size()];
	}
};