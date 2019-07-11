#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int minCostClimbingStairs(vector<int>& cost) {
		int size = cost.size();
		if (size < 2)
			return 0;

		vector<int> dp;
		dp.push_back(cost[0]);
		dp.push_back(cost[1]);

		for (int i = 2; i < size; ++i)
			dp.push_back(min(dp[i - 1], dp[i - 2]) + cost[i]);

		return min(dp[size - 1], dp[size - 2]);
	}
};