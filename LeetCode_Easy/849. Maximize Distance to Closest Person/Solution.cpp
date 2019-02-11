#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxDistToClosest(vector<int>& seats) {
		int distance = 0, S_L = 0, size = seats.size(), L = 0, R = size - 1;
		while (L < size && seats[L] == 0)
			++L;
		if (distance < L) {
			distance = L;
			S_L = 0;
		}
		while (0 < R && seats[R] == 0)
			--R;
		if (distance < size - R - 1) {
			distance = size - R - 1;
			S_L = size - 1;
		}

		int tmp_L;
		while (L < R) {
			while (L < R && seats[L] == 1)
				++L;
			tmp_L = L;
			while (L < R && seats[L] == 0)
				++L;
			if (distance < L - tmp_L) {
				distance = L - tmp_L;
				S_L = tmp_L;
			}
		}

		if (S_L == 0 || S_L == size - 1)
			return distance;
		else
			return (distance + 1) / 2;
	}
};