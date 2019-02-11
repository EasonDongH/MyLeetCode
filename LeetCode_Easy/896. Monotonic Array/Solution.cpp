#include <vector>
using namespace std;

class Solution {
public:
	bool isMonotonic(vector<int>& A) {
		int size = A.size();
		if (size <= 1)
			return true;
		int i = 1;
		while (i < size && A[0] == A[i])
			++i;

		bool flag = A[i - 1] < A[i];
		for (; i < size;++i) {
			if (A[i - 1] == A[i])
				continue;

			bool tmp = A[i - 1] < A[i];
			if (tmp != flag)
				return false;
		}

		return true;
	}
};