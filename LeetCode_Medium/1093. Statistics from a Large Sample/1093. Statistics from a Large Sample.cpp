#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<double> sampleStats(vector<int>& count) {
		int size = count.size();
		double minNum, maxNum, meanNum, medianNum, modeNum;
		for (int i = 0; i < size; ++i) {
			if (count[i] != 0) {
				minNum = i;
				break;
			}
		}
		for (int i = size - 1; 0 <= i; --i) {
			if (count[i] != 0) {
				maxNum = i;
				break;
			}
		}
		int sum = 0, cnt = 0;
		for (int i = minNum; i <= maxNum; ++i) {
			sum += count[i] * i;
			cnt += count[i];
		}
		meanNum = (double)sum / cnt;
		int findCnt = cnt / 2;
		for (int i = minNum, tmpCnt = 0; i <= maxNum; ++i) {
			int tmp = tmpCnt + count[i];
			if (tmp < findCnt)
				tmpCnt = tmp;
			else {
				if (cnt & 1)
					medianNum = i;
				else {
					if (tmp > findCnt)
						medianNum = i;
					else {
						if (tmp == findCnt) {
							int j = i + 1;
							for (; j<=maxNum && count[j] == 0; ++j);
							medianNum = (i + j) / 2.0;
						}
					}
				}

				break;
			}
		}
		for (int i = minNum, tmpMax = 0; i <= maxNum; ++i) {
			if (tmpMax < count[i]) {
				tmpMax = count[i];
				modeNum = i;
			}
		}

		return { minNum, maxNum, meanNum, medianNum, modeNum };
	}
};