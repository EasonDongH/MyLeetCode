#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string strWithout3a3b(int A, int B) {
		char c1 = 'a', c2 = 'b';
		string ans;

		if (A < B)
		{
			swap(c1, c2);
			swap(A, B);
		}

		int a, b;
		for (a = 0, b = 0; b < B; ++a, ++b)
		{
			ans += c1;
			ans += c2;
		}

		size_t prev = 0;
		while (a < A)
		{
			size_t pos = ans.find(c2, prev);
			if (pos == string::npos) {
				ans += c1;
				prev = ans.size();
			}
			else
			{
				ans.insert(pos, 1, c1);
				prev = min(pos + 2, ans.size());
			}
			++a;
		}
		return ans;
	}

};