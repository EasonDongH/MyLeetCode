#include "stdafx.h"
#include "CppUnitTest.h"
#include "../849. Maximize Distance to Closest Person/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_849)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> seats{ 1,0,1,0,0,0,1 };
			Assert::IsTrue(obj.maxDistToClosest(seats) == 2);
		}
	};
}