#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumProduct(vector<int>& nums) {
	int product;
	vector<int> positive, negative, zero;
	for (auto n : nums) {
		if (0 < n)
			positive.push_back(n);
		else if (n < 0)
			negative.push_back(n);
		else
			zero.push_back(n);
	}
	if (3 <= positive.size()) {
		make_heap(positive.begin(), positive.end());
		int tmp = positive.front();
		product = tmp;
		pop_heap(positive.begin(), positive.end()); positive.pop_back();
		product *= positive.front();
		pop_heap(positive.begin(), positive.end()); positive.pop_back();
		product *= positive.front();

		if (2 <= negative.size()) {
			make_heap(negative.begin(), negative.end(), greater<int>());
			tmp *= negative.front();
			pop_heap(negative.begin(), negative.end(), greater<int>());
			negative.pop_back();
			tmp *= negative.front();
		}

		product = max(product, tmp);
		return product;
	}
	else if (2 == positive.size()) {
		if (0 < zero.size()) return 0;
		//2正1负
		make_heap(negative.begin(), negative.end(), greater<int>());
		product = negative.front();
		return product * positive[0] * positive[1];
	}
	else if (1 == positive.size()) {
		if (2 <= negative.size()) {
			//1正2负，取绝对值最大的2个负数
			make_heap(negative.begin(), negative.end(), greater<int>());
			product = negative.front();
			pop_heap(negative.begin(), negative.end(), greater<int>());
			negative.pop_back();
			product *= negative.front();

			return product * positive[0];
		}
		else//1正0/1负n零
			return 0;
	}
	else if (0 == positive.size()) {
		if (0 < zero.size()) return 0;
		//全负，取3个绝对值最小的负数
		make_heap(negative.begin(), negative.end());
		product = negative.front();
		pop_heap(negative.begin(), negative.end()); negative.pop_back();
		product *= negative.front();
		pop_heap(negative.begin(), negative.end()); negative.pop_back();
		product *= negative.front();
		pop_heap(negative.begin(), negative.end()); negative.pop_back();
		return product;
	}
}

int main() {
	vector<int> nums{ 722,634,-504,-379,163,-613,-842,-578,750,951,-158,30,-238,-392,-487,-797,-157,-374,999,-5,-521,-879,-858,382,626,803,-347,903,-205,57,-342,186,-736,17,83,726,-960,343,-984,937,-758,-122,577,-595,-544,-559,903,-183,192,825,368,-674,57,-959,884,29,-681,-339,582,969,-95,-455,-275,205,-548,79,258,35,233,203,20,-936,878,-868,-458,-882,867,-664,-892,-687,322,844,-745,447,-909,-586,69,-88,88,445,-553,-666,130,-640,-918,-7,-420,-368,250,-786 };
	maximumProduct(nums);

	return 0;
}