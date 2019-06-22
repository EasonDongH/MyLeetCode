#include <bits/stdc++.h>
using namespace std;

class Solution {
	int findMaxX(vector<int>& tmp, int X)
	{
		int index = 0, size = tmp.size(), tmp_Max = 0, Max = 0;
		for (int i = 0; i < X && i < size; ++i)
			Max += tmp[i];
		tmp_Max = Max;
		for (int i = X; i < size; ++i)
		{
			tmp_Max = tmp_Max - tmp[i - X] + tmp[i];
			if (tmp_Max > Max)
			{
				Max = tmp_Max;
				index = i-X+1;
			}
		}
		return index;
	}
public:
	int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
		int size = customers.size(), ans = 0;
		vector<int> tmp(size, 0);
		for (int i = 0; i < size; ++i)
		{
			if (grumpy[i] == 1)
				tmp[i] = customers[i];
			else
				ans += customers[i];
		}
		int index = findMaxX(tmp, X);
		for (int i = 0; i < X; ++i)
		{
			if (grumpy[i + index] == 1)
			{
				ans += customers[i + index];
			}
		}
		return ans;
	}
};