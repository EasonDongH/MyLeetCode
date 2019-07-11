#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/874. Walking Robot Simulation.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_874)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> commands{ 4,-1,4,-2,4 };
			vector<vector<int>> obstacles{ {2,4} };
			Assert::IsTrue(obj.robotSim(commands, obstacles) == 65);
		}
	};
}