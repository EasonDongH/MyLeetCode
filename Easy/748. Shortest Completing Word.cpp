#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	bool compare(string& str1, string& str2) {
		vector<int> mark(26, 0);
		for (auto c : str1)
			++mark[tolower(c) - 'a'];

		for (auto c : str2) {
			if (0 < mark[c - 'a'])
				--mark[c - 'a'];
			else
				return false;
		}

		return true;
	}
public:
	string shortestCompletingWord(string licensePlate, vector<string>& words) {
		//1. find all the letters in licensePlate, and let them to lower case.
		//2. let all word in words to lower case.
		//3. count the smallest length.
		//4. compare all the words who is smallest length with licensePlate

		string lettersInLicense;
		for (auto c : licensePlate) {
			if (isalpha(c))
				lettersInLicense += tolower(c);
		}

		int smallest_length = INT_MAX;
		vector<string> alternative;
		for (int i = 0; i<int(words.size()); ++i) {
			if (compare(words[i], lettersInLicense)) {
				alternative.push_back(words[i]);
				if (int(words[i].size()) < smallest_length)
					smallest_length = int(words[i].size());
			}
		}

		for (int i = 0; i<int(alternative.size()); ++i) {
			if (int(alternative[i].size()) == smallest_length)
				return alternative[i];
		}

		return "";
	}
};

static auto makeFast = []() {
	std::ios::sync_with_stdio(false);    // turn off sync
	std::cin.tie(NULL);                         // untie in/out streams
	return 0;
}();