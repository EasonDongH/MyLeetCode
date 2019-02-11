#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
	
public:
	//     vector<int> shortestToChar(string S, char C) {
	//         vector<int> ans;
	//         for(int i=0, size=S.size(); i<size; ++i){
	//             int behind = i;
	//             while(behind<size && S.at(behind) != C)
	//                 ++behind;

	//             int min_Dis = i==0? INT_MAX : ans[i-1]+1;
	//             if(behind<size && S.at(behind) == C)
	//                 min_Dis = min(min_Dis, behind-i);

	//             ans.push_back(min_Dis);
	//         }

	//         return ans;
	//     }

	vector<int> shortestToChar(string S, char C) {
		const int Inf = 999999;
		int size = S.size();
		vector<int> front(size), behind(size), ans;

		front[0] = S[0] == C ? 0 : Inf;
		behind[size - 1] = S[size - 1] == C ? size - 1 : Inf;
		for (int i = 1, j = size - 2; i < size && 0 <= j; ++i, --j) {
			if (S[i] == C)
				front[i] = i;
			else
				front[i] = front[i - 1];

			if (S[j] == C)
				behind[j] = j;
			else
				behind[j] = behind[j + 1];
		}

		for (int i = 0; i < size; ++i)
			ans.push_back(min(abs(i - front[i]), abs(i - behind[i])));

		return ans;
	}
};

static auto makeFast = []() {
	std::ios::sync_with_stdio(false);    // turn off sync
	std::cin.tie(NULL);                  // untie in/out streams
	return 0;
}();