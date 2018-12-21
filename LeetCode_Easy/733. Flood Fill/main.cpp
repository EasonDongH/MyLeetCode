#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
	int directions[][2] = { {0,-1},{0,1},{-1,0},{1,0} };
	queue<pair<int, int>> q;
	vector<vector<bool>> mark(image.size());

	for (int i = 0; i < image.size(); ++i)
		mark[i].resize(image[i].size(), false);

	int oldColor = image[sr][sc];
	image[sr][sc] = newColor;
	q.push(make_pair(sr, sc));
	while (!q.empty()) {
		auto coordinate = q.front(); q.pop();

		for (int i = 0; i < 4; ++i) {
			int tmp_R = coordinate.first + directions[i][0];
			int tmp_C = coordinate.second + directions[i][1];
			if ((0 <= tmp_R && tmp_R < image.size()) && (0 <= tmp_C && tmp_C < image[tmp_R].size()) && !mark[tmp_R][tmp_C]) {
				if (image[tmp_R][tmp_C] == oldColor) {
					mark[tmp_R][tmp_C] = true;
					q.push(make_pair(tmp_R, tmp_C));
					image[tmp_R][tmp_C] = newColor;
				}
			}
		}
	}

	return image;
}

int main() {
	vector<vector<int>> image;
	image.push_back(vector<int>{0,0,0});
	image.push_back(vector<int>{0, 1, 1});
	int sr = 1, sc = 1, newColor = 1;

	floodFill(image,sr,sc,newColor);

	return 0;
}