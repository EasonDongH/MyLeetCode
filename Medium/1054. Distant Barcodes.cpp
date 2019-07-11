#include <bits/stdc++.h>
using namespace std;

class Solution {
	bool flag;
	vector<int> ans;
	void dfs(int index, int pre, int size, vector<int> tmp, map<int, int> mii) {
		if (index == size)
		{
			flag = true;
			ans = tmp;
			return;
		}
		for (auto it = mii.begin(); it != mii.end(); ++it)
		{
			if (it->second == 0)
				continue;
			if (pre != it->first)
			{
				tmp[index] = it->first;
				--it->second;
				dfs(index + 1, it->first, size, tmp, mii);
				++it->second;
			}
		}
	}
public:
	vector<int> rearrangeBarcodes(vector<int>& barcodes) {
		int size = barcodes.size();
		flag = false;
		map<int, int> mii;
		vector<int>tmp(size);
		for (auto b : barcodes)
			++mii[b];
		for (auto it = mii.begin(); it != mii.end() && flag == false; ++it)
		{
			--it->second;
			tmp[0] = it->first;
			dfs(1, it->first, size, tmp, mii);
			++it->second;
		}
		return ans;
	}
};