#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/967. Numbers With Same Consecutive Differences.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_967)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			auto actual = obj.numsSameConsecDiff(3, 7);
			vector<int> excepted{ 181,292,707,818,929 };
			Assert::IsTrue(actual.size() == excepted.size());
			set<int> mask;
			for (auto num : excepted)
				mask.insert(num);
			for (auto num : actual) {
				auto itera = mask.find(num);
				Assert::IsTrue(itera != mask.end());
			}
		}
	};
}