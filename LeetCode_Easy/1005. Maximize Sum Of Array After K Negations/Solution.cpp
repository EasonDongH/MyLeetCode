#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
	int largestSumAfterKNegations(vector<int>& A, int K) {
		priority_queue<int, vector<int>, greater<int>> pq;

		for (auto a : A)
			pq.push(a);

		while (K > 0)
		{
			if (pq.top() < 0 || K == 1)
			{
				int top = pq.top(); pq.pop();
				pq.push(-top);
				--K;
			}
			else
			{
				K -= 2;
			}
		}

		int sum = 0;
		while (pq.size() > 0)
		{
			sum += pq.top(); pq.pop();
		}

		return sum;
	}
};