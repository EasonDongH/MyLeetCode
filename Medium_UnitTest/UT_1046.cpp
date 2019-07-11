#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/1046. Last Stone Weight.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1046)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> stones{ 2,7,4,1,8,1 };
			int ans = obj.lastStoneWeight(stones);
			Assert::IsTrue(ans == 1);
		}

	};
}