#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int myAtoi(string str) {
		int size = str.size(), first_No_Space = -1, first_Number = -1;
		bool negative = false, overFlow = false;
		for (int i = 0; i < size; ++i)
		{
			if (isdigit(str[i]))
			{
				first_Number = i;
				break;
			}
			else if (str[i] != ' ' && first_No_Space == -1)
			{
				first_No_Space = i;
			}
		}

		if (first_Number == -1)
			return 0;//û������
		if (first_No_Space != -1)
		{
			if (str[first_No_Space] != '+' && str[first_No_Space] != '-')
				return 0;//����֮ǰ�г��ˡ� ������+������-��֮����ַ�
			if (first_No_Space + 1 != first_Number)
				return 0;//�����������Ų����ڣ�����Ϊ��һ���ַ�Ϊ��Ч�ַ�
			negative = str[first_No_Space] == '-';
		}

		int64_t ans = 0;
		for (int i = first_Number, digit; i < size&&isdigit(str[i]); ++i)
		{
			digit = str[i] - '0';
			ans = ans * 10 + digit;
			if (ans > INT_MAX)
			{
				overFlow = true;
				break;
			}
		}

		if (overFlow == false && negative)
			ans *= -1;
		if (overFlow)
		{
			ans = negative ? INT_MIN : INT_MAX;
		}
		return (int)ans;
	}
};