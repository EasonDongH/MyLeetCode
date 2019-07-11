#include <bits/stdc++.h>
using namespace std;

class Solution {
	vector<string> ans;
	void dfs(int left, int right, string str) {
		if (left == 0 && right == 0 && str != "") {
			ans.push_back(str);
			return;
		}
		if (left > 0)
			dfs(left - 1, right, str + '(');
		if (left < right)
			dfs(left, right - 1, str + ')');
	}
public:
	vector<string> generateParenthesis(int n) {
		dfs(n, n, "");
		return ans;
	}
};