#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
		set<pair<int, int>> us_pair_ii;
		for (int i = 0, size = obstacles.size(); i < size; ++i)
			us_pair_ii.insert(pair<int, int>(obstacles[i][0], obstacles[i][1]));

		int maxED = 0, direction = 0, x = 0, y = 0;
		for (int i = 0, size = commands.size(); i < size; ++i) {
			if (commands[i] < 0) {
				if (commands[i] == -1)//turn right
					direction = (direction + 1) % 4;
				else//turn left
					direction = direction != 0 ? direction - 1 : 3;
			}
			else {
				pair<int, int> tmp(x, y);
				for (int j = 0; j < commands[i]; ++j) {
					switch (direction) {
						case 0:
							++tmp.second; break;
						case 1:
							++tmp.first; break;
						case 2:
							--tmp.second; break;
						case 3:
							--tmp.first; break;
					}
					if (us_pair_ii.count(tmp) == 0) {
						x = tmp.first; y = tmp.second;
					}
					else
						break;
				}

				maxED = max(maxED, x*x + y * y);
			}
		}

		return maxED;
	}
};