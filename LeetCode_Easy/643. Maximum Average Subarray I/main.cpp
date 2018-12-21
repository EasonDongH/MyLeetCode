#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
	assert(k <= nums.size());
	int max_k_sum = INT_MIN, curr = 0, cnt = 0;
	for (int i = 0; i < k; ++i) {
		curr += nums[i];
	}
	max_k_sum = max(max_k_sum, curr);
	for (int i = k; i < nums.size(); ++i) {
		curr = curr - nums[i - k] + nums[i];
		max_k_sum = max(max_k_sum, curr);
	}

	return (double)(max_k_sum) / k;
}

int main() {
	int k = 6;
	vector<int> nums{ 9,7,3,5,6,2,0,8,1,9};
	findMaxAverage(nums,k);

	return 0;
}