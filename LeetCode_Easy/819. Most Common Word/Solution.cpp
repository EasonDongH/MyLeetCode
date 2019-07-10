#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	vector<string> split(const string& paragraph) {
		vector<string> ans;
		string word;
		for (auto c : paragraph) {
			if (isalpha(c))
				word += tolower(c);
			else if (word.size() != 0) {
				ans.push_back(word);
				word = "";
			}
		}
		if (word.size() != 0)
			ans.push_back(word);

		return ans;
	}
public:
	string mostCommonWord(string paragraph, vector<string>& banned) {
		//unordered_set<string> us_s;
		/*for (auto b : banned)
			us_s.insert(b);

		vector<string> words = split(paragraph);
		map<string, int> m_s;
		for (auto w : words)
			if (us_s.find(w) == us_s.end())
				++m_s[w];

		int max_cnt = 0;
		string ans;
		for (auto m : m_s)
			if (max_cnt < m.second) {
				max_cnt = m.second;
				ans = m.first;
			}
			*/
		return "";
	}
};