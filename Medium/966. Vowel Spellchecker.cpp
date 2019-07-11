#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	vector<bool> mask;
	string allToLower(string& str) {
		string ans;
		for (auto c : str)
			ans += tolower(c);
		return ans;
	}

	string ridChar(string& str) {
		string ans;
		for (auto c : str) {
			if (mask[c] == false)
				ans += tolower(c);
		}
		return ans;
	}

	int checkVowelErrors(string& query, vector<int>& indexs, vector<string>& wordList) {
		int  size = query.size();
		for (auto i : indexs) {
			auto len = wordList[i].size();
			if (size != len)
				continue;

			int j;
			for (j = 0; j < size; ++j) {
				if (query[j] != wordList[i][j]) {
					if (tolower(query[j]) == tolower(wordList[i][j]) || (mask[query[j]] == true && mask[wordList[i][j]] == true))
						continue;
					else
						break;
				}
			}
			if (j == size)
				return i;
		}

		return -1;
	}
public:
	vector<string> spellchecker(vector<string>& wordList, vector<string>& queries) {
		mask.resize(128, false);
		mask['a'] = mask['e'] = mask['i'] = mask['o'] = mask['u'] = true;
		mask['A'] = mask['E'] = mask['I'] = mask['O'] = mask['U'] = true;

		set<string> s_str;
		map<string, int> msv;
		map<string, vector<int>> mve;
		for (int i = 0, size = wordList.size(); i < size; ++i) {
			s_str.insert(wordList[i]);
			auto tmp = allToLower(wordList[i]);
			if (msv.count(tmp) == 0)
				msv[tmp] = i;
			tmp = ridChar(wordList[i]);
			mve[tmp].push_back(i);
		}

		vector<string> ans;
		for (auto query : queries) {
			if (s_str.find(query) != s_str.end())
				ans.push_back(query);
			else {
				auto tmp = allToLower(query);
				if (msv.count(tmp) != 0) {
					int index = msv[tmp];
					ans.push_back(wordList[index]);
				}
				else {
					auto tmp = ridChar(query);
					if (mve.count(tmp) != 0) {
						int index = checkVowelErrors(query, mve[tmp], wordList);
						if (index != -1)
							ans.push_back(wordList[index]);
						else
							ans.push_back("");
					}
					else
						ans.push_back("");
				}
			}
		}

		return ans;
	}
};