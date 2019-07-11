#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool buddyStrings(string A, string B) {
		int index1 = -1, index2 = -1, ASize = A.size(), BSize = B.size();
		if (ASize != BSize)
			return false;
		if (ASize == 0)
			return true;
		if (ASize == 1)
			return A == B;

		bool hasSame = false;
		vector<bool> mark(26, false);
		for (int i = 0; i < ASize; ++i) {
			hasSame |= mark[A[i] - 'a'] == true;
			mark[A[i] - 'a'] = true;
			if (A[i] != B[i]) {
				if (index1 == -1)
					index1 = i;
				else if (index2 == -1) {
					index2 = i;
					if (A[index1] != B[index2] || A[index2] != B[index1])
						return false;
				}
				else
					return false;
			}
		}

		if (index1 == -1)
			return hasSame;
		else if (index2 == -1)
			return false;
		else
			return A[index1] == B[index2] && A[index2] == B[index1];
	}
};