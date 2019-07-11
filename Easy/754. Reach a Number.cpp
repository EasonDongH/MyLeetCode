#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	int n = 0;
	bool rc(int curr, int target) {
		if (curr == target || rc(curr + n, target) || rc(curr - n, target))
			return true;
		++n;
		return false;
	}
public:
	int reachNumber(int target) {
		return rc(0, target);
	}
};