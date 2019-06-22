#include "stdafx.h"
#include "CppUnitTest.h"
#include "../22. Generate Parentheses/22. Generate Parentheses.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_22)
	{
	public:
		set<string> except_Set;
		void func(vector<string> str, set<string> & tmp_Set)
		{
			except_Set.clear();
			for (auto s : str)
				tmp_Set.insert(s);
		}
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			bool flag = true;
			vector<string> except{ "((()))","(()())","(())()","()(())","()()()" }, actual;
			actual = obj.generateParenthesis(3);
			func(except, except_Set);
			flag = except_Set.size() == actual.size();
			if (flag) {
				for (auto str : actual)
					if (except_Set.count(str) == 0) {
						flag = false;
						break;
					}
			}
			Assert::IsTrue(flag);
		}
	};
}