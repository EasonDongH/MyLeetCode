#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> ans;
		sort(nums.begin(), nums.end());
		for (int i = 0, size = nums.size(); i < size; ++i) {
			if (i > 0 && nums[i - 1] == nums[i])
				continue;
			for (int j = i+1; j < size; ++j) {
				if (j > i+1 && nums[j - 1] == nums[j])
					continue;
				int tmp = target - nums[i] - nums[j];
				int left = j + 1, right = size - 1;
				while (left < right) {
					int sum = nums[left] + nums[right];
					if (sum > tmp)
						--right;
					else if (sum < tmp)
						++left;
					else {
						ans.push_back({ nums[i],nums[j],nums[left],nums[right] });
						int n1 = nums[left], n2 = nums[right];
						while (left < right && nums[left] == n1 && nums[right] == n2) {
							++left; --right;
						}
					}
				}
			}
		}
		return ans;
	}
};