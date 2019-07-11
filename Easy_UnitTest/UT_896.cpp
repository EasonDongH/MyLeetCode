#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/896. Monotonic Array.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_896)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> A{ 1,2,2,3 };
			Assert::IsTrue(obj.isMonotonic(A));
		}
	};
}