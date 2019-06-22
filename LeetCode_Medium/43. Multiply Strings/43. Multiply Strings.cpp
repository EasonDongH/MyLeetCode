#include <bits/stdc++.h>
using namespace std;

class Solution {
	string add(string num1, string num2) {
		string ans;
		int i = num1.size() - 1, j = num2.size() - 1, carry = 0, num;
		for (; 0 <= i && 0 <= j; --i, --j) {
			num = (num1[i] - '0') + (num2[j] - '0') + carry;
			ans += (num % 10 + '0');
			carry = num / 10;
		}
		for (; 0 <= i; --i) {
			num = (num1[i] - '0') + carry;
			ans += (num % 10 + '0');
			carry = num / 10;
		}
		for (; 0 <= j; --j) {
			num = (num2[j] - '0') + carry;
			ans += (num % 10 + '0');
			carry = num / 10;
		}
		while (carry > 0) {
			ans += (carry % 10 + '0');
			carry = carry / 10;
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
	string multiply(int cnt, string num) {
		string ans = "0";
		while (cnt--) {
			ans = add(ans, num);
		}
		return ans;
	}
public:
	string multiply(string num1, string num2) {
		string ans = "0";
		for (int i = num1.size() - 1, j=0; 0 <= i; --i, ++j) {
			string tmp = multiply(num1[i] - '0', num2);
			for (int k = 0; k < j; ++k)
				tmp += "0";
			ans = add(ans, tmp);
		}
		return ans;
	}
};