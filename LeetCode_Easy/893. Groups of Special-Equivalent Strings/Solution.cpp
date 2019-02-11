#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int numSpecialEquivGroups(vector<string>& A) {
		int size = A.size();
		vector<map<char, pair<int, int>>> mark(size);

		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < int(A[i].size()); ++j) {
				if (j % 2 == 0)
					++mark[i][A[i][j]].first;
				else
					++mark[i][A[i][j]].second;
			}
		}

		vector<bool> collected(size, false);
		set<int> s_i;
		for (int i = 0; i < size; ++i) {
			if (collected[i])
				continue;

			collected[i] = true;
			s_i.insert(i);
			for (int j = i + 1; j < size; ++j) {
				if (collected[j] || A[i].size() != A[j].size())
					continue;

				bool  flag = true;
				for (auto it = mark[i].cbegin(); it != mark[i].cend(); ++it) {
					auto tmp = mark[j].find(it->first);
					if (tmp ==mark[j].end() || it->second.first != tmp->second.first|| it->second.second != tmp->second.second) {
						flag = false;
						break;
					}
				}
				collected[j] = flag;
			}
		}

		return s_i.size();
	}
};