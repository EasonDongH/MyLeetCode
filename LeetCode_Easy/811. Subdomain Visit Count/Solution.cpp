#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	pair<int, vector<string>> split(string& website) {
		vector<string> sites;
		size_t pos = website.find(' ');
		int i = 0, cnt = stoi(website.substr(0, pos));
		sites.push_back(website.substr(pos+1));

		while ((pos = sites[i].find('.')) != string::npos) {
			sites.push_back(sites[i].substr(pos+1));
			++i;
		}

		return { cnt, sites };
	}
public:
	vector<string> subdomainVisits(vector<string>& cpdomains) {
		map<string, int> m_si;
		for (auto s : cpdomains) {
			auto p = split(s);
			for (auto site : p.second)
				m_si[site] += p.first;
		}

		vector<string> ans;
		for (auto m : m_si)
			ans.push_back(to_string(m.second) + ' ' + m.first);

		return ans;
	}
};