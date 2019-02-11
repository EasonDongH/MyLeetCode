#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows < 2)
			return s;

		vector<string> strs(numRows);
		for (int i = 0, size = s.size(); i < size; )
		{
			for (int j = 0; j < numRows&&i < size; ++j)
				strs[j] += s[i++];
			for (int j = numRows - 2; 1 <= j && i < size; --j)
				strs[j] += s[i++];
		}
		for (int i = 1; i < numRows; ++i)
			strs[0] += strs[i];
		return strs[0];
	}
};