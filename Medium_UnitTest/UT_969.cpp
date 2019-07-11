#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/969. Pancake Sorting.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_969)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> A{ 3,2,4,1 };
			vector<int> excepted{ 4,2,4,3 };
			auto  actual = obj.pancakeSort(A);
			Assert::IsTrue(excepted.size() != actual.size());
			for (int i = 0, size = actual.size(); i < size; ++i)
				Assert::IsTrue(actual[i] == excepted[i]);
		}
	};
}