#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/754. Reach a Number.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_754)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			Assert::IsTrue(obj.reachNumber(3) == 2);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			Assert::IsTrue(obj.reachNumber(2) == 3);
		}

	};
}