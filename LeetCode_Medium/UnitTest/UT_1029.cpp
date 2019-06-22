#include "stdafx.h"
#include "CppUnitTest.h"
#include "../1029. Two City Scheduling/1029. Two City Scheduling.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1029)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<vector<int>> costs{ {10, 20},{30, 200},{400, 50},{30, 20} };
			Assert::IsTrue(obj.twoCitySchedCost(costs) == 110);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<vector<int>> costs{ {259, 770},{448, 54},{926, 667},{184, 139},{840,118},{577,469} };
			Assert::IsTrue(obj.twoCitySchedCost(costs) == 1859);
		}
	};
}