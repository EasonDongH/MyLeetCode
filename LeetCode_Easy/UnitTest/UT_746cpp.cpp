#include "stdafx.h"
#include "CppUnitTest.h"
#include "../746. Min Cost Climbing Stairs/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_746)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			vector<int> cost{ 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
			Assert::IsTrue(obj.minCostClimbingStairs(cost) == 6);
		}

	};
}