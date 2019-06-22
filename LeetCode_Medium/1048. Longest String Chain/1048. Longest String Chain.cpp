#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
	/*static bool cmp(const string s1, const string s2) {
		return s1.size() < s2.size();
	}
	bool isPredecessor(string word1, string word2) {
		int w1_Size = word1.size(), w2_Size = word2.size();
		if (w1_Size + 1 != w2_Size)
			return false;
		for (int w1 = 0, w2 = 0; w1 < w1_Size; ++w1) {
			while (w2 < w2_Size && word1[w1] != word2[w2])
				++w2;
			if (w2 == w2_Size)
				return false;
		}
		return true;
	}

	int longest = 0, words_Size = 0;
	void dfs(int index, int cnt, const vector<string> & words) {
		if (cnt > longest)
			longest = cnt;
		for (int i = index + 1; i < words_Size; ++i) {
			if (isPredecessor(words[index], words[i]))
				dfs(i, cnt + 1, words);
		}
	}
public:
	int longestStrChain(vector<string> & words) {
		words_Size = words.size();
		sort(words.begin(), words.end(), cmp);
		dfs(0, 1, words);
		return longest;
	}*/
};
