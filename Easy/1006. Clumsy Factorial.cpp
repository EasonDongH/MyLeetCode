#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int clumsy(int N) {
		int op_index = 0, priority[128] = { 0 };
		char Operator[] = { '*','/','+','-' };
		stack<int> operand;
		stack<char> op;

		priority['*'] = priority['/'] = 2;
		priority['+'] = priority['-'] = 1;
		for (int i = N; 0 < i; --i)
		{
			operand.push(i);
			while (true)
			{
				if (op.size() == 0 || priority[op.top()] < priority[Operator[op_index]])
				{
					op.push(Operator[op_index]);
					break;
				}
				else if (operand.size() > 1 && op.size() > 0)
				{
					char tmp_operator = op.top(); op.pop();
					int opertand1 = operand.top(); operand.pop();
					int opertand2 = operand.top(); operand.pop();
					int res;
					switch (tmp_operator)
					{
					case '+': res = opertand2 + opertand1; break;
					case '-': res = opertand2 - opertand1; break;
					case '*': res = opertand2 * opertand1; break;
					case '/': res = opertand2 / opertand1; break;
					}
					operand.push(res);
				}
			}
			op_index = (op_index + 1) % 4;
		}

		if (operand.size() > 1)
		{
			while (op.size() > 1)
				op.pop();
			char tmp_operator = op.top(); op.pop();
			int opertand1 = operand.top(); operand.pop();
			int opertand2 = operand.top(); operand.pop();
			int res;
			switch (tmp_operator)
			{
			case '+': res = opertand2 + opertand1; break;
			case '-': res = opertand2 - opertand1; break;
			case '*': res = opertand2 * opertand1; break;
			case '/': res = opertand2 / opertand1; break;
			}
			operand.push(res);
		}
		return operand.top();
	}
};