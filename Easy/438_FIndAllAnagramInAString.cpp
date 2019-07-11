#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string s, string p) {
	vector<int> ans;
	vector<int> p_mark(128, 0);
	for (auto c : p)
		p_mark[c]++;

	int i, j, slen = s.length(), plen = p.length();
	for (i = 0; i < slen - plen + 1; i++) {
		vector<int> tmp_mark = p_mark;
		for (j = i; j < i + plen; j++) {
			if (tmp_mark[s[j]] == 0)
				break;
			tmp_mark[s[j]]--;
		}

		if (j == i + plen)
			ans.push_back(i);
	}

	return ans;
}

int main() {
	string s = "cbaebabacd", p = "abc";
	findAnagrams(s, p);

	return 0;
}