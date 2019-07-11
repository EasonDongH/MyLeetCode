#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
	int j, T;
	vector<int> ans;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != i + 1) {
			T = nums[i];
			while (T != nums[T - 1]) {
				int tmp = T;
				T = nums[T - 1];
				nums[tmp - 1] = tmp;
			}
			if (nums[i] != i + 1)
				nums[i] = T;
		}
	}

	for (int i = 0; i < nums.size(); i++)
		if (nums[i] != i + 1)
			ans.push_back(i);

	return ans;
}

int main() {
	vector<int> nums{ 2,1 };
	findDisappearedNumbers(nums);

	return 0;
}