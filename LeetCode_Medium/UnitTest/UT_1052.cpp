#include "stdafx.h"
#include "CppUnitTest.h"
#include "../1052. Grumpy Bookstore Owner/1052. Grumpy Bookstore Owner.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1052)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> customers{ 1,0,1,2,1,1,7,5 }, grumpy{ 0,1,0,1,0,1,0,1 };
			int ans = obj.maxSatisfied(customers, grumpy,3);
			Assert::IsTrue(ans ==16);
		}
};
}