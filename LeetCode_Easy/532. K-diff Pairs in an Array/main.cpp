#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int findPairs(vector<int>& nums, int k) {
	if (nums.size() <= 1)
		return 0;

	sort(nums.begin(), nums.end());
	int i = 0, j = 1, m, cnt = 0;
	while (i <nums.size()) {
		while (j<nums.size() && (nums[j]<k + nums[i]))
			++j;
		if (nums[j] == nums[i] + k)
			++cnt;
		for (m = i + 1; m<nums.size() && nums[i] == nums[m]; ++m);
		i = m;
	}

	return cnt;
}

int main() {
	vector<int> nums{ 1,3,1,5,4 };
	findPairs(nums, 0);

	return 0;
}