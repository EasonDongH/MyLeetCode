#include <bits/stdc++.h>
using namespace std;

#define INF 9999999

class Solution {
private:
	int findMinDist(vector<vector<int>>& G, vector<int>& dist, vector<bool>& collected) {
		int minV, minDist = INF;
		for (int i = 0; i<int(G.size()); ++i) {
			if (collected[i] == false && dist[i] < minDist) {
				minDist = dist[i];
				minV = i;
			}
		}

		if (minDist < INF)
			return minV;
		else
			return -1;
	}

	bool dijkstra(vector<vector<int>>& G, int S, vector<int>& dist, vector<int>& path) {
		vector<bool> collected(G.size(), false);
		for (int i = 0; i<int(G.size()); ++i) {
			dist[i] = G[S][i];
			if (G[S][i] < INF) {
				path[i] = S;
			}
		}

		dist[S] = 0;
		collected[S] = true;
		int V = S;
		while (true) {
			V = findMinDist(G, dist, collected);
			if (V == -1)
				break;

			collected[V] = true;
			for (int W = 0; W<int(G[V].size()); ++W) {
				if (collected[W] == false && G[V][W] < INF) {
					if (dist[V] + G[V][W] < dist[W]) {
						dist[W] = dist[V] + G[V][W];
						path[W] = V;
					}
				}
			}
		}

		return true;
	}
public:
	int networkDelayTime(vector<vector<int>>& times, int N, int K) {
		vector<int> path(N, -1), dist(N, -1);
		vector<vector<int>> G;
		for (int i = 0; i < N; ++i)
			G.push_back(vector<int>(N, INF));
		for (int i = 0; i < int(times.size()); ++i) {
			G[times[i][0] - 1][times[i][1] - 1] = times[i][2];
		}

		K = K - 1;
		dijkstra(G, K, dist, path);

		int ans = 0;
		for (int i = 0; i<int(dist.size()); ++i)
			if (dist[i] == INF)
				return -1;
			else if (ans < dist[i])
				ans = dist[i];

		return ans;
	}
};