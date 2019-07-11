#include <bits/stdc++.h>
using namespace std;

class Solution {
	struct node {
		int A, B, Diff;
		bool operator <(const node& n) {
			return Diff > n.Diff;
		}
	};
public:
	int twoCitySchedCost(vector<vector<int>>& costs) {
		int ans = 0, size = costs.size(), ASize, BSize;
		ASize = BSize = size / 2;
		vector<node> nodes;
		for (int i = 0; i < size; ++i)
			nodes.push_back({ costs[i][0], costs[i][1], abs(costs[i][0] - costs[i][1]) });
		sort(nodes.begin(), nodes.end());
		for (int i = 0; i < size; ++i) {
			if (nodes[i].A < nodes[i].B) {
				if (ASize > 0) {
					--ASize;
					ans += nodes[i].A;
				}
				else {
					--BSize;
					ans += nodes[i].B;
				}
			}
			else {
				if (BSize > 0) {
					--BSize;
					ans += nodes[i].B;
				}
				else {
					--ASize;
					ans += nodes[i].A;
				}
			}
		}
		return ans;
	}
};
