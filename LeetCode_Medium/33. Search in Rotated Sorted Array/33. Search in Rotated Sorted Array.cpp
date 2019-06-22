#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int size = nums.size();
		if (size == 0)
			return -1;
		else if (size == 1) {
			return target == nums[0] ? 0 : -1;
		}
		else if (size == 2) {
			return target == nums[0] ? 0 : (target == nums[1] ? 1 : -1);
		}
		int left = 0, right = size - 1;
		while (nums[left] > nums[right]) {
			int mid = left + (right - left) / 2;
			if (left + 1 == right)
				break;
			if (nums[mid] > nums[left])
				left = mid;
			else if (nums[mid] < nums[right])
				right = mid;
		}
		if (left == 0 && right == size - 1) {
			left = 0; right = size - 1;
		}
		else if (target >= nums[left]) {
			left = 0; right = left;
		}
		else {
			left = left + 1; right = size - 1;
		}
		auto it = lower_bound(nums.begin() + left, nums.begin() + right + 1, target);
		if (it == nums.end() || *it != target)
			return -1;
		else
			return (it - nums.begin());
	}
};