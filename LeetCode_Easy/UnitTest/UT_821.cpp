#include "stdafx.h"
#include "CppUnitTest.h"
#include "../821. Shortest Distance to a Character/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_821)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			char C = 'e';
			string S("loveleetcode");
			auto actual = obj.shortestToChar(S,C);
			vector<int> excepted{ 3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0 };
			for (int i = 0, size = actual.size(); i < size; ++i)
				Assert::IsTrue(actual[i] == excepted[i]);
		}
	};
}