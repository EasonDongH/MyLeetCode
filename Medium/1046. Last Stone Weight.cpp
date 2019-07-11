#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		priority_queue<int, vector<int>, less<int>> pq;
		for (auto stone : stones)
			pq.push(stone);
		int first, second;
		while (pq.size() > 1)
		{
			first = pq.top(); pq.pop();
			second = pq.top(); pq.pop();
			first -= second;
			if (first != 0)
				pq.push(first);
		}
		return pq.size() == 0 ? 0 : pq.top();
	}
};
