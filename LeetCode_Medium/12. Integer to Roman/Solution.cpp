#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		int n = 1;
		string ans, pattern = "I";
		vector<pair<int, string>> mark(1001);
		for (int i = 0; i < 1001; ++i)
		{
			switch (i)
			{
			case 1: n = 1; pattern = "I"; break;
			case 4: n = 4; pattern = "IV"; break;
			case 5: n = 5; pattern = "V"; break;
			case 9: n = 9; pattern = "IX"; break;
			case 10: n = 10; pattern = "X"; break;
			case 40: n = 40; pattern = "XL"; break;
			case 50: n = 50; pattern = "L"; break;
			case 90: n = 90; pattern = "XC"; break;
			case 100: n = 100; pattern = "C"; break;
			case 400: n = 400; pattern = "CD"; break;
			case 500: n = 500; pattern = "D"; break;
			case 900: n = 900; pattern = "CM"; break;
			case 1000: n = 1000; pattern = "M"; break;
			}

			mark[i] = { n,pattern };
		}

		int select;
		while (num > 0)
		{
			select = num < 1000 ? num : 1000;
			ans += mark[select].second;
			num -= mark[select].first;
		}

		return ans;
	}
};