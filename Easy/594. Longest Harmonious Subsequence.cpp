#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findLHS(vector<int>& nums) {
	map<int, int> m;

	for (auto n : nums)
		++m[n];

	int ans = 0;
	for (auto m_itera = m.begin(); m_itera != m.end(); ++m_itera) {
		if (0 < m.count(m_itera->first + 1)) {
			int t = m[m_itera->first] + m[m_itera->first + 1];
			if (ans < t)
				ans = t;
		}
	}

	return ans;
}

int main() {
	vector<int> nums{ 1,3,2,2,5,2,3,7 };
	findLHS(nums);

	return 0;
}