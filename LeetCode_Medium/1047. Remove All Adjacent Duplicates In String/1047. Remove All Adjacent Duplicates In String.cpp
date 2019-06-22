#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string removeDuplicates(string S) {
		for (int i = 0; i + 1 < S.size(); ++i) {
			if (S[i] == S[i + 1]) {
				S.erase(i, 2);
				i = i == 0 ? -1 : i - 2;
			}
		}
		return S;
	}
};
