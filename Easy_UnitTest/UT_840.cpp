#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/840. Magic Squares In Grid.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_840)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<vector<int>> grid{ {4,3,8,4},{9,5,1,9},{2,7,6,2} };
			Assert::IsTrue(obj.numMagicSquaresInside(grid) == 1);
		}
	};
}