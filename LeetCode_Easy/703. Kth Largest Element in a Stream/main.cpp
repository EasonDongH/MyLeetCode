#include <bits/stdc++.h>
using namespace std;

class KthLargest {
private:
	int k;
	priority_queue<int, vector<int>, greater<int>> k_Nums;
public:
	KthLargest(int k, vector<int> nums) {
		this->k = k;

		sort(nums.begin(), nums.end(), greater<int>());
		for (int i = 0; i < k - 1; ++i) {
			k_Nums.push(nums[i]);
		}
		if (k <= nums.size())
			k_Nums.push(nums[k - 1]);
	}

	int add(int val) {
		if (k_Nums.size() < k) {
			k_Nums.push(val);
		}
		else if (k_Nums.top() < val) {
			k_Nums.pop();
			k_Nums.push(val);
		}

		return k_Nums.top();
	}
};

int main() {
	vector<int> nums{ 4,5,8,2 };
	KthLargest* obj = new KthLargest(3, nums);
	int para = obj->add(3);

	return 0;
}