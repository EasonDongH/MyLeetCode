#include <bits/stdc++.h>
using namespace std;

class Solution {
	string preProcess(const string& s) {
		string ans;
		ans += "^#";
		for (auto c : s) {
			ans += c;
			ans += '#';
		}

		ans += '$';
		return ans;
	}
public:
	string longestPalindrome(string s) {
		s = preProcess(s);
		int max_Right = 0, center = 0, longest_Substr_Center = 0;
		vector<int> P(s.size(), 0);
		for (int i = 1, j = 0, size = s.size(); i < size; ++i) {
			if (i < max_Right) {
				j = 2 * center - i;
				P[i] = min(max_Right - i, P[j]);
			}
			while (s[i - P[i] - 1] == s[i + P[i] + 1])
				++P[i];
			if (i + P[i] > max_Right) {
				max_Right = i + P[i];
				center = i;
			}
			if (P[i] > P[longest_Substr_Center])
				longest_Substr_Center = i;
		}
		int left = longest_Substr_Center - P[longest_Substr_Center], len = 2 * P[longest_Substr_Center] + 1;
		string tmp = s.substr(left, len), ans;
		for (auto c : tmp)
			if (c != '#')
				ans += c;
		return ans;
	}
};