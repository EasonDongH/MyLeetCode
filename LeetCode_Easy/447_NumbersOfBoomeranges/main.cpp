#include <vector>
#include <map>
using namespace std;

int A_n_2[501] = { 0,0,2,3 };
int A(int n) {
	if (A_n_2[n] == 0)
		A_n_2[n] = n * A(n - 1);
	return A_n_2[n];
}

long distance(pair<int, int>& p1, pair<int, int>& p2) {
	long x = p1.first - p2.first;
	long y = p1.second - p2.second;
	return x * x + y * y;
}

int numberOfBoomerangs(vector<pair<int, int>>& points) {
	long cnt = 0;
	for (int i = 0; i<points.size(); i++) {
		map<long, int> m;
		for (int j = 0; j<points.size(); j++) {
			if (i == j) continue;
			m[distance(points[i], points[j])]++;
		}

		for (map<long, int>::iterator it = m.begin(); it != m.end(); it++)
			if (it->second > 1)
				cnt += A(it->second);
	}

	return cnt;
}

int main() {
	vector<pair<int, int>> points;
	points.push_back(pair<int, int>{0, 0});
	points.push_back(pair<int, int>{1, 0});
	points.push_back(pair<int, int>{-1, 0});
	points.push_back(pair<int, int>{0, 1});
	points.push_back(pair<int, int>{0, -1});

	numberOfBoomerangs(points);

	return 0;
}